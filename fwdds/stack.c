
#include<stdio.h>
int stack[100];
int i,n,top=-1;
int main()
{

printf("enter the length of stack");
scanf("%d",&n);
/*for(i=0;i<n;i++)
{
printf("enter the element");
scanf("%d",&stack[i]);
}
printf("the original array \n");
for(i=0;i<n;i++)
{
printf("%d",stack[i]);
}
*/
int c;
printf("enter 1 to push ,2 to pop,3 to exit");
scanf("%d",&c);
do
{

switch(c)
{
case 1:
{
int stackFull()
{
if(top>=n-1)
return 1;
else
return 0;
}
int push()
{
printf("enter the element to be inserted");
int item;
scanf("%d",&item);
if(!stackFull())
{
stack[++top]=item;
}
else
{
printf("stack overflow");
}
}
}

break;
//pop
case 2:
{
int stackEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int pop()
{
if(!stackEmpty())
{
return stack[top];
}
else
{
printf("stack overflow");
}
}
}
break;
case 3:
{
printf("exiting");
break;
}
case 4:
{
printf("the stack");
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
break;
default:
printf("invalid choice");
}}
}while(c!=3);

return 0;
}





