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
