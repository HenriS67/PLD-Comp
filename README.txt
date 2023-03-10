python3 ifcc-test.py ./testfiles/*.c

hbailleux@if501-219-13:~/PLD-Comp/pld-comp/compiler$ gcc -S ret42.c
hbailleux@if501-219-13:~/PLD-Comp/pld-comp/compiler$ make
g++ -g -c -std=c++17 -I../antlr/include -Wno-attributes  -MMD -o build/CodeGenVisitor.o CodeGenVisitor.cpp 
g++ -g build/*.o ../antlr/lib/libantlr4-runtime.a -o ifcc
hbailleux@if501-219-13:~/PLD-Comp/pld-comp/compiler$ ./ifcc ret42.c
.globl  main
 main: 
# prologue
pushq %rbp              # save %rbp on the stack
movq %rsp, %rbp         # define %rbp for the current function
        movl    $42, %eax
# epilogue
popq %rbp                       # restore %rbp from the stack
        re


questce qui a changé ?
movl	$42, -4(%rbp)
	movl	-4(%rbp), %eax

    a est à -4


make gui FILE=ret42.c

grammar ifcc;

axiom : prog ;

prog : 'int' 'main' '(' ')' '{' code RETURN VAR ';' '}' ;

code : 'int' VAR '=' CONST';';

RETURN : 'return' ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
VAR : ('a'..'z'|'A'..'Z');