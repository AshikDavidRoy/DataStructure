#include<stdio.h>
int queue[100],rear=-1,front=-1,n,k,item;
void Enqueue();
void Dequeue();
void Display();
int main()
{

    printf("Enter the size of queue : \n");
    scanf("%d",&n);
    printf("\t\t------Queue Operations--------");
    do
    {

        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display \n 4.Exit\n");
        printf("You're opinion : ");
        scanf("%d",&k);
        switch(k)
        {
        case 1:
        {
            Enqueue();
            break;
        }
        case 2:
        {
            Dequeue();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            printf("Exiting");
            break;
        }
        default:
        {
            printf("Invalid");
        }
        }
    }
    while(k!=4);
    return 0;
}
void Enqueue()
{



    if(front==0&&rear==n||front==rear+1)
    {
        printf("circular queue is full\n");

    }
    else
    {
        printf("Enter the item to be inserted : ");
        scanf("%d",&item);


        if(front==-1)
        {
            rear=front=0;

        }
        else
        {
            rear=(rear+1)%n;

        }
        queue[rear]=item;
    }
}


void Dequeue()
{
    if(front ==-1)
    {
        printf("circular queue is empty /n");
    }
    else
    {
        item=queue[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        printf(" element deleted =%d",item);
    }
}
void Display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");
        if(front<rear)
        {
            for(i=front; i<=rear; i++)
                printf("%d",queue[i]);

        }
        else
        {
            for(i=0; i<=rear; i++)
                printf("\t%d",queue[i]);
            for(i=front; i<=n-1; i++)
                printf("\t%d",queue[i]);

        }
        printf("\n");
    }
}
