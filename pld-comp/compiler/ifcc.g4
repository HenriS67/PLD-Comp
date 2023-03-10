grammar ifcc;

axiom : prog ;

prog : 'int' 'main' '(' ')' '{' code? RETURN id ';' '}' ;

code : instruction ';'
     | instruction ';' code;

instruction : type VAR '=' id;

id : CONST|VAR;
type : 'string'|'int';
RETURN : 'return' ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
VAR : [a-zA-Z]+;
