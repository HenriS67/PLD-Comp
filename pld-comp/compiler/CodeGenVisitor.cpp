#include "CodeGenVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{

	/*int retvar = stoi(ctx->VAR()->getText());*/

	std::cout<<".globl	main\n"
		" main: \n"
		"# prologue\n"
		"pushq %rbp 		# save %rbp on the stack\n"
		"movq %rsp, %rbp 	# define %rbp for the current function\n";
	visit(ctx->code());
	std::cout<<"# epilogue\n"
		"popq %rbp 			# restore %rbp from the stack\n"	
		" 	ret\n";

	return 0;
}
antlrcpp::Any CodeGenVisitor::visitCode(ifccParser::CodeContext *ctx) 
{
	/*int retvar = stoi(ctx->VAR()->getText());*/
	int retval = stoi(ctx->CONST()->getText());
	std::cout<<
		" 	movl	$"<<retval<<", -4(%rbp)\n"
		" 	movl	-4(%rbp), %eax\n"
		;
	return 0;
}

