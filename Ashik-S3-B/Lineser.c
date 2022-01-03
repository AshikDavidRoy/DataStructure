
#include<stdio.h>

int main()
{
    int i,x,n;
    printf("Enter the size of the Array? \n");
    scanf("%d",&n);
int a[n];
    printf("Enter array elements: \n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("\n Enter element to search: \n");
    scanf("%d",&x);

    for(i=0;i<n;++i)
        if(a[i]==x)
            break;

    if(i<n)
        printf("Element found at index %d \n",i);
    else
        printf("Element not found\n");

    return 0;
}
