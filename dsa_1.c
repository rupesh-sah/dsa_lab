
#include<stdio.h>
#include<stdlib.h>
#define MAX 5 

int s[MAX];
int top = -1;

void push(int item);
int pop();
void display();

void main(){

	int choice, item;
	
	while(1){
		printf("\n ****menu*****");
		printf("\n => 1. push the element..");
		printf("\n => 2.pop the element");
		printf("\n => display the element ");
		printf("\n => exit ");
		printf("\n chose the element ");
		   scanf("%d", &choice);
		   
		   switch(choice){
		   	case 1 : printf("Enter an element be in stack");
		   		scanf("%d", &item);
		   		push(item);
		   		
		   		break;
		   		
		   	case 2 : item = pop();
		   		if(item != -1)
		   			printf("pop the element from the stack %d",item);
		   		break;
		   		
		   	case 3 : display();
		   		break;
		   	case 4 : exit(1);
		   	default : printf("plese enter the valid chose");
		   		break; 
		   	
		   	
		   		  			
		   
		   }
	
	}

}


void push(int item){
	if(top == MAX-1){
		printf("***********stack overflow********");
		return;
		
	}
	top = top+1;
	s[top] = item;
}
int pop(){
	int item;
	if(top == -1){
		printf("\n stack underflow");
		return -1;
		
	
	}
	item = s [top];
	top = top - 1;
	return item;
}

void display(){
	
	int i;
	if(top == -1){
		printf("\n***********Stack is empty*****");
		return;
		
	}
	printf("\n Stack elements are:\n");
	for(i=top; i>=0;i--)
		printf("|%d|\n",s[i]);
}










