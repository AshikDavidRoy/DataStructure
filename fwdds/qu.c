#include<stdio.h>
#include<stdlib.h>
int queue[100],rear=-1,size,front=-1;
void enqueue()
{
    int item;
    printf("Enter The Element To Insert: ");
    scanf("%d",&item);
    if(rear==size-1)
    {
        printf("Overflow");
    }
    else
    {
        if(rear==-1)
        {
            front=rear=0;
        }
        else
            rear++;
        queue[rear]=item;
    }
}
void dequeue()
{
    int item;
    if(rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        item=queue[front];
        printf("Deleted Item = %d",item);
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("Queue Is Empty \n\n");
    }
    else
    {
        for(i=front; i<=rear; i++)
        {
            printf("\t%d",queue[i]);
        }
    }
}
int main()
{
    int op;
    printf("\n------------------------------");
    printf("\nEnter The Size Of The Queue : ");
    scanf("%d",&size);
    while(1)
    {
        printf("\n--------------------------------------------");
        printf("\n\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("\n--------------------------------------------");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n***Invalid Input***\n");
            break;
        }
    }
}



