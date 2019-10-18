#include<iostream>
using namespace std;
#define Max 100
typedef struct
{
    char a[Max];
    int top;
}STK;

void push(STK *s,char item)
{
    if(s->top == Max-1)
        cout << "Stack is Full";
    else{
        s->a[++s->top] = item;
    }
}

char pop(STK *s)
{
    if(s->top == -1)
        return -1;
    else
    {
        return s->a[s->top--];
    }
}

char peek(STK *s)
{
    if(s->top == -1)
        return -1;
    else
    {
        return s->a[s->top];
    }
}

bool check_parenthesis(char *exp)
{
    STK a;
    a.top = -1;
    int i=0;
    while(exp[i])
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(&a,exp[i]);
        else
        {
            if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
            {
                char c = peek(&a);
                switch(exp[i])
                {
                    case ')':
                                if(c == '(') 
                                pop(&a);
                                else if(c == '{' || c == '[')
                                return false;
                                break;
                    case '}':
                                if(c == '{')
                                pop(&a);
                                else if(c == '(' || c == '[')
                                return false;
                                break;
                    case ']':
                                if(c == '[')
                                pop(&a);
                                else if(c == '(' || c == '{')
                                return false;
                                break;            
                                
                }
            }
            
        }
        i++;
    }
    if(a.top == -1)
        return true;
    else
        return false;
}

int main()
{
    char exp[Max];
    cout << "Enter Parenthesis Expression: ";
    cin >> exp;
    cout << check_parenthesis(exp);
    return 0;
}