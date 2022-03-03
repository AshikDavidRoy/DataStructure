#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;


void push(char item)
{
    if(top>=99)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top]=item;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        char item=stack[top];
        top--;
        return item;
    }
}
int prec(char x)
{
    if(x=='^')
    {
        return 3;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    else if(x=='+'||x=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void infix_postfix(char infix[])
{
    char postfix[100],ch,item;
    int i=0,j=0;
    push('#');
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
        {
            push (ch);
        }
        else if(isalnum(ch))
        {
            postfix[j++]=ch;
        }
        else if(ch==')')
        {
            while(stack[top]!='(')
            {
                postfix[j++]=pop();
            }
            item=pop();
        }
        else
        {
            while(prec(stack[top])>=prec(ch))
            {
                postfix[j++]=pop();
            }
            push(ch);
        }
    }
    while(stack[top]!='#')
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("\n the postfix exp is: %s",postfix);
}
void main()
{
    char infix[100],postfix[100];
    printf("enter the infix exp");
    scanf("%s",infix);
    infix_postfix(infix);
}



