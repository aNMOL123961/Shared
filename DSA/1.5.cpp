#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int opndstack[50];
int tos=-1;
void push(int item){
	tos++;
	opndstack[tos]=item;
}
int pop(){
	int item;
    item=opndstack[tos];
    tos--;
	return item;
}
bool isoperator(char item){
	if(item=='^' || item=='$' || item=='/' || item=='*' || item=='+' || item=='-')
	    return true;
    else 
        return false;
}
int evaluatepostfix(char postfix[]){
	int op1,op2,res;
	int i=0;
	char item;
	item=postfix[i];
	while(item!='\0'){
		if(isoperator(item)){
			op2=pop();
			op1=pop();
			if(item=='^')
			   res=pow(op1,op2);
			else if(item=='$')
			   res=pow(op1,op2);
			else if(item=='/')
			   res=op1/op2;
			else if(item=='*')
				res=op1*op2;
			else if(item=='+')
				res=op1+op2;
			else if(item=='-')
				res=op1-op2;
			push(res);
		}
		else 
			push((int)item-48);
		i++;
		item=postfix[i];
	}
	return opndstack[tos];
}
int main(){
    char postfix[50];
    printf("Enter valid postfix expression\n");
    gets(postfix);
    int res=evaluatepostfix(postfix);
    printf("Result is: %d",res);
	return 0;	
}
