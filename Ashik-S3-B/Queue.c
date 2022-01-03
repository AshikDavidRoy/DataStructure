#include <stdio.h>
void in();
void out();
void display();

int arr[10];
int r=-1;
int f=-1;

int main()

{
	int c;
	do
	{
		printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
		printf("\nYour choice : \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1 : printf("\n\nInsert the element \n\t");
				 in();
				 break;
			case 2 : printf("\nPOP the element\n\t");
				  out();
			 	 break;
			case 3 : printf("\nDisplay the element 🤨️\n\t");
				 display();
			case 4 : printf("\nExit the Queue\n");
				 break;
			default : printf("\nInvaild\n");
	
		}
	}
	while(c!=4)
	{
	return 0;
	}
}
}

void in()
{
    int item;
    if (r == 9){
    printf("\nThe Queue is Overflowed \n");
   { int i;
    if (f== - 1)
        printf("\n\nThe Queue is empty \n");
    else
        {
        printf("\n\nThe elements in the Queue are : \n");
        for (i = f; i <= r; i++)
        printf("%d ",arr[i]);
	printf("\n");

        }
}} 	
    else

    {
        if (f==-1)	
        f = 0;
        printf("\n\nInset the element in queue : ");
        scanf("%d", &item);
        r = r + 1;
        arr[r] =item;
    }
        }



void out()
{
    if (f==-1 || f>r)
    {
        printf("\n\nQueue Underflow \n");
        return ;
    }
    else
    {
        printf("\n\nElement deleted from queue is : %d\n",arr[f]);
        f=f + 1;
    }
}

void display()
{
    int i;
    if (f == - 1)
        printf("\n\nQueue is empty \n");
    else
    {
        printf("\n\nQueue is : \n");
        for (i = f; i <= r; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}
