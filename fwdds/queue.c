#include<stdio.h>
#define n 100
void enqueue(void);
void dequeue(void);
int q[n],no,ch,rear=0,front=0,item;
int main()
{
    printf("Enter the number of elements in the Queue\n");
    scanf("%d\n",&no);


    printf("----QUEUE OPERATIONS----\n");
    do
    {
        printf("Choose the operation\n");
        printf("1.EnQueue\n2.DeQueue\n3.Exit");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        default :
            printf("\nEnter a valid choice\n");

        }
    }
    while(ch!=3);
    return 0;
}
void enqueue()
{
    if(rear==(no-1))
    {
        printf("Queue is full");
    }
    else
    {
        printf("Enter the element to be entered: ");
        scanf("%d",&item);
        q[rear]=item;
        rear++;

    }
    void dequeue()
    {
        if(rear==front)
        {
            printf("Queue is empty\n");
        }
        else
        {
            item=q[front];
            front++;
            printf("The deleted item is: %d",item);
        }
    }
}

