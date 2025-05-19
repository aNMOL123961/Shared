 #include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int opndstack[50];
int tos=-1;
void reverse(char array[]){
	array=strrev(array);
}
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
int evaluateprefix(char prefix[]){
	int op1,op2,res;
	int i=0;
	char item;
	item=prefix[i];
	while(item!='\0'){
		if(isoperator(item)){
			op1=pop();
			op2=pop();
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
		item=prefix[i];
	}
	return opndstack[tos];
}
int main(){
    char prefix[50];
    printf("Enter valid prefix expression\n");
    gets(prefix);
    reverse(prefix);
    int res=evaluateprefix(prefix);
    printf("Result is: %d",res);
	return 0;	
}
