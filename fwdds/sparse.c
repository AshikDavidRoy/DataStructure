#include<stdio.h>
int main()
{

    int tz,te,tn=0,r,c,i,j,co=0,d,b;
    co=co+2;
    printf("enter the number of rows");
    scanf("%d",&r);
    co++;
    printf("enter the number of columns");
    scanf("%d",&c);
    co++;
    int a[r][c];
    te=r*c;
    co++;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter the element  : ");
            scanf("%d",&a[i][j]);
            co++;
        }
        co++;
    }
    co++;

    printf("\nthe input matrix \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t%d\t",a[i][j]);
            co++;
        }
        printf(" \n");
        co++;
    }
    co++;
    printf("\tROW \tColumn \tValue\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]>0)
            {
                tn=tn+1;
                d=i;
                b=j;
                co++;

                printf("\t%d  \t %d     \t\t%d\n   ",r,c,tn);
                printf(" ");
                printf("\t%d  \t %d     \t\t%d\n  ",d,b,a[i][j]);
            }
            co++;
        }
        co++;

    }
    co++;
    tz=te-tn;
    co++;

    if(tz>tn)
    {
        printf("it is a sparse matrix");
    }
    else
    {
        printf("not sparse matrix");
    }
    printf("\ntime complexity = %d",co);
    printf("\nspace complexity = %d",40);
}
