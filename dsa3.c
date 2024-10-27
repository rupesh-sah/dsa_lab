#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int s[20], top = -1;

void push(int item) { 
	s[++top] = item; 
	}
	
int pop() {
	 return s[top--]; 
 }

int main() {
    char postfix[90];
    int op1, op2;
    printf("Enter a valid postfix expression:\n");
    scanf("%s", postfix);
    
    for (int i = 0; postfix[i] != '\0'; i++) {
        char symb = postfix[i];
        if (isdigit(symb))
            push(symb - '0');
        else {
            op2 = pop();
            op1 = pop();
            switch (symb) {
                case '+': push(op1 + op2); 
                	break;
                case '-': push(op1 - op2);
               		break;
                case '*': push(op1 * op2); 
                	break;
                case '/': push(op1 / op2); 
                	break;
                case '%': push(op1 % op2);
                	 break;
                case '^': push((int)pow(op1, op2)); 
                	break;
            }
        }
    }
    printf("Result = %d\n", pop());
    return 0;
}
