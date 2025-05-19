#include<stdio.h>
#include<stdlib.h>

int i,n=5,top=-1,stack[5];

void push(int item){
	if(top==n-1)
	   printf("\n Stack Overflow, Please remove some items !");
    else{
		 top++;
		 stack[top]=item;
		 printf("\n%d pushed in stack.",item);
	}  
}
void pop(){
	if(top==-1)
	  printf("\n Stack Empty/Underflow, Please insert some item!");
	else{
		int item=stack[top];
		printf("\n%d poped from stack.",item);
		top--;
	}	 
}
void display(){
	printf("\nItems are:\n");
	for(i=top;i>=0;i--)
	    printf("%d\t",stack[i]);
} 
int main(){
    push(10);
	push(20);
	push(30);
	display();
	pop();
	display();
	return 0;
}
