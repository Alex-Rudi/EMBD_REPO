#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 255
typedef int datatype;
void push(datatype v); 
datatype pop(void);
int isEmpty(void); 
void operate(char c); 
datatype st[MAX_STACK_SIZE];

int pst=0;
void push(datatype v) 
{
    st[pst++]=v;
} 
datatype pop()
{
    if(pst<=0) {
        fprintf(stderr, "Error. Stack underflow");
        return 1;
    } else if(pst>MAX_STACK_SIZE) {
        fprintf(stderr, "Error. Stack overflow");
        return 1;
    }
    return st[--pst];
}

 int isEmpty() 
{
    return (pst<=0);
}

void operate(char c) 
{
    datatype arg1=pop(),arg2=pop();
    switch(c)
    {
        case '+':
            push(arg1+arg2);
        break;
        case '-':
            push(arg2-arg1);
        break;      
        case '*':
            push(arg1*arg2);
        break;              
        case '/':
            push(arg2/arg1);
        break;              
    }
}
_Bool isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}   

_Bool isOperator(char c) {
    return c=='+' ||  c=='-' ||  c=='*' || c=='/';
}


int main(void)
{
    char c;
    //printf("Input inverse string: ");
    
    char str[1000];    
    int len=0;
   
    while((c=getchar())!='\n')
        str[len++]=c;
    str[len]=0; 

    for(int i=0;i<len;i++)    
    {
        if(isDigit(str[i]))
        {
            datatype number;
            for(number=0;isDigit(str[i]);i++)
                number=number*10+str[i]-'0';
            push(number);
        }        
        else
        {
            if(i>=len)            
                break;
            if(isOperator(str[i]))
                 operate(str[i]);
        }
    }
    printf("%d\n",pop());
    return 0;
}
