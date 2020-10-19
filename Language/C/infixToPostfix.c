// It converts infix expression to postix

#include<stdio.h>
#define SIZE 50

struct stack{
	char a[SIZE];
	int top;
}s;

void push(char c){
	s.top++;
	s.a[s.top] = c;
	return;
	
}

char pop(){
	char pp;
	pp=s.a[s.top];
	s.top--;
	return pp;
}

void printstack(){
	int i;
	printf("\n\n");
	for(i=0;i<=s.top;i++){
		printf("%c\n",s.a[i]);
	}
}

void main(){
	s.top=-1;
	char exp[50];
	int i,j;
	printf("Enter the expression : ");
	scanf("%s",&exp);
	for(i=0;i<50;i++){
		if((exp[i]>47 && exp[i]<58) || (exp[i]>96 && exp[i]<123)){
			printf("%c",exp[i]);
		}
		else if(exp[i]=='('){
			push(exp[i]);
		}
		else if(exp[i]==')'){
			for(j=s.top;s.a[j]!='(';j--){
				printf("%c",pop());
			}
			pop();
		}
		else if(exp[i]=='\0'){
			for(j=s.top; j>=0; j--){
				printf("%c",pop());
			}
			break;
		}
		else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='/' || exp[i]=='*'){
			char x = s.a[s.top];
			if(x=='+' || x=='-' || x=='/' || x=='*'){
				if(exp[i]=='/' || exp[i]=='*'){
					if(x=='+' || x=='-'){
						push(exp[i]);
					}
					else{
						printf("%c",pop());
						push(exp[i]);
					}
				}
				else if(exp[i]=='+' || exp[i]=='-'){
					printf("%c",pop());
					push(exp[i]);
				}
			}
			else{
				push(exp[i]);
			}
		}
	//	printstack();
	}
}
