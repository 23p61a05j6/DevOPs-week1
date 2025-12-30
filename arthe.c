
%{
#include <stdio.h>
#include<string.h>
%}


	[0-9a-zA-Z]+     printf("\nExpression: %s");
	"="              printf("\nOperator: Equal");
	"+"              printf("\nOperator: Addition");
	"-"              printf("\nOperator: Subtraction");
	"*"              printf("\nOperator: Multiplication");
	"%"              printf("\nOperator: Modulus"); }



int main() {
    printf("Enter an expression:\n");
    
    return 0;
}



