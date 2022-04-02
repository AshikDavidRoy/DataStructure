//Git test
#include <stdio.h>
void enqueue();
void denqueue();
void display();

int r=-1;
int f=-1;
int max;
int arr[];
int main()

{

printf("Enter the Size of the Array : ");
scanf("%d",&max);
arr[max];
int c;
	do
	{
		printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
		printf("\nYour choice : \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1 : printf("\n\nInsert the element \n\t");
				enqueue();
				 break;
			case 2 :  printf("\nDelete the element\n\t");
				denqueue();
			 	 break;
			case 3 : printf("\nDisplay the element \n\t");
				 display();
			case 4 : printf("\nExit the Queue\n");
				 break;
			default : printf("\nInvaild\n");
	
		}
	}
	while(c!=4);
	return 0;
}

void enqueue(int e)
{
	printf("\n\nInsert the element in queue : ");
	scanf("%d", &e);
	
       	if((r+1)%max==f)
		
			{
				printf("\nThe Queue is Overflowed \n");
			}
			
		else if((f==-1&&r==-1))
		
			{	
		
				f=0;
				r=0;
				arr[r]=e;
			}
	
		else
			{
				r=(r+1)%10;
				arr[r]=e;
			}
}

void denqueue()

{ 
	if(f==-1)
	{
	 printf("\n\nQueue Underflow \n");
	}
	else if(f==r)
	{
		printf("\n\nElement deleted from queue is : %d\n",arr[f]);
		r=-1;
		f=-1;
	}
	else
	{
	printf("\n\nElement deleted from queue is : %d\n",arr[f]);
	f=(f+1)%max;
	
	}
}


void display()
{
	int i = f;
	if(f==-1)
	{
	 printf("\n\nQueue Underflow\n");
	}
	
	else 
	{
		printf("\n\nThe elements Queue is : \n");
		while(i<=r)
			{
				printf("%d ", arr[i]);
        			printf("\n");
        			i=(i+1)%max;
        			++i;
			}
	}
}
