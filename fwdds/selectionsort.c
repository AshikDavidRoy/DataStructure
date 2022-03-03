#include<stdio.h>
int main()
{
    int n,i,j,c=0,minindex;
    c++;
    printf("enter the length of array : ");
    scanf("%d",&n);
    c++;
    int a[n],temp;
    for(i=0; i<n; i++)
    {

        printf("enter the element : ");
        scanf("%d",&a[i]);
        c++;
    }
    c++;
    for(i=0; i<n-1; i++)
    {
        minindex=i;
        c++;
        for(j=i+1; j<n; j++)
        {
            if(a[j]>a[minindex])
            {
                minindex=j;
                c++;
            }
            c++;
            temp = a[minindex];
            a[minindex] = a[j];
            a[j] = temp;
            c=c+3;
        }
        c++;

    }
    c++;
    printf("\nthe sorted array is :  ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
        c++;
    }
    c++;
    printf("\ntime complexity  =  %d",c);
    printf("\nspace complexity = %d",(24+4*n));
    return 0;
}


