#include <stdio.h>
void push();
void pop();
void display();

int stack[10],top = -1;

int main()
{
	int c;
	
	do{
		printf("\nThe choice : \n");
		printf("\n1.Push \n2.POP \n3.Display \n4. Exit\n");
		printf("\nYour choice : \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1 : printf("\n\nPush the element\n\t");
				 push();
				 break;
			case 2 : printf("\nPOP the element\n\t");
				 pop();
			 	 break;
			case 3 : printf("\nDisplay the element\n\t");
				 display();
			case 4 : printf("\nExit the Stack\n");
				 break;
			default : printf("\nInvaild\n");
	
		}
	}
	while(c!=4);
	return 0;

}

void push(){
int ele;
	if(top>=10-1)
	{
		printf("\n\nOverflow\n\n");
	}
	else
	{
		printf("\nEnter the element : \n");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}

void pop(){
	if(top<=-1)
	{
		printf(" \nThe Stack is Underflow\n");
	}
	else
	{
		printf("\nThe element Poped is %d",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\nEnter the element in the Stack is : \n");
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	else
	{
		printf("\n\nThe Stack is Empty\n\n");
	}
}
