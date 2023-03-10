#include "CodeGenVisitor.h"
#include <string>
#include <map>
std::map<std::string, int> map;
int compteur=0;
antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	std::string retour = ctx->id()->getText();
	std::cout<<".globl	main\n"
		" main: \n"
		"# prologue\n"
		"pushq %rbp 		# save %rbp on the stack\n"
		"movq %rsp, %rbp 	# define %rbp for the current function\n";
	if(ctx->code())
		visit(ctx->code());
	if(!ctx->id()->VAR()){
		std::cout<<
			"movl	$"<< retour <<", %eax\n";
	}
	else{
		std::cout<<
			"movl	"<< map[retour] <<"(%rbp), %eax\n";
	}
	std::cout<<	"# epilogue\n"
			"popq %rbp 			# restore %rbp from the stack\n"	
			" 	ret\n";

	return 0;
}
antlrcpp::Any CodeGenVisitor::visitCode(ifccParser::CodeContext *ctx) 
{
	/*std::string affect = (ctx->VAR()->getText());
	int retval = stoi(ctx->CONST()->getText());
	std::cout<<
		" 	movl	$"<<retval<<", -4(%rbp)\n"
		" 	movl	-4(%rbp), %eax\n"
		;*/
	visit(ctx->instruction());
	return 0;
}
antlrcpp::Any CodeGenVisitor::visitInstruction(ifccParser::InstructionContext *ctx) 
{
	std::string type = (ctx->type()->getText());
	std::string var = (ctx->VAR()->getText());
	std::string id = (ctx->id()->getText());
	compteur+=4;
	map[var]=-compteur;
	std::cout<<
		" 	movl	$"<<id<<", "<<map[var]<<"(%rbp)\n"
		" 	movl	"<<map[var]<<"(%rbp), %eax\n"
		;
	return 0;
}
