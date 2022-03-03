#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    c++;
    printf("enter the length of array");
    scanf("%d",&n);
    c++;
    int a[n],temp;
    for(i=0; i<n; i++)
    {

        printf("enter the element");
        scanf("%d",&a[i]);
        c++;
    }
    c++;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                c=c+3;
            }
            c++;

        }
        c++;
    }
    c++;
    printf("the sorted array is ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
        c++;
    }
    c++;
    printf("time complexity =%d",c);
    printf("space complexity=%d",(20+4*n));
    return 0;
}


