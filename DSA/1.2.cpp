#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

char opstack[50];
int tos=-1;

void push(char item){
	tos++;
	opstack[tos]=item;
}
char pop(){
	char item;
	item=opstack[tos];
	tos--;
	return item;
}
int precedence(char item){
	if(item=='^' || item=='$')
		return 3;

	else if(item=='/' || item=='*')
		return 2;   
		
	else if(item=='+' || item=='-')
		return 1;
		
	else 
	    return 0;	
}
bool isoperator(char item){
	if(item=='^'|| item=='$'|| item=='*' || item=='/' || item=='+' || item=='-')
    	return true;
    else
    	return false;
}
void infixtopostfix(char infix[], char postfix[])
{ 
	int i, j;   
	char item;  
	char x;     
	push('#'); 
	i=0;  
	j=0;   
	item=infix[i];
	while(item != '\0'){
		if(item == '(')
			push(item);
		else if( isdigit(item) || isalpha(item)){
			postfix[j] = item;              
			j++;   
		}
		else if(isoperator(item)){
			x=pop();
			while(isoperator(x) && precedence(x)>= precedence(item)){
				postfix[j] = x;                 
				j++;
				x = pop();                       
			}
			push(x);
			push(item);                 
		}
		else if(item == ')'){
			x = pop();                  
			while(x != '('){
				postfix[j] = x;
				j++;
				x = pop();
			}
		}
		i++;
		item = infix[i]; 
	} 
	while(opstack[tos] != '#'){
    	char item=pop();
    	postfix[j]=item;
    	j++;
	}
	postfix[j] = '\0'; 
}
int main(){
	char infix[50],postfix[50];
	printf("Enter valid infix expression:\n");
	gets(infix);
	infixtopostfix(infix,postfix);
	printf("Postfix expression is:\n");
    puts(postfix);
	return 0;
}
