#include<stdio.h>
int main()
{
    int i,j,n,k;
    struct poly
    {
        int exp,coef;
    } x1[10],x2[10],x3[10];

    printf("Enter the no. of terms of first polynomial\n");
    scanf("%d",&n);
    printf("\n Enter the coefficients and exponents of the polynomial\n");
    for(i=0; i<n; i++)
    {

        scanf("%d",&x1[i].coef);
        scanf("%d",&x1[i].exp);
    }



    /*printf("Enter the no. of terms of second polynomial\n");
    scanf("%d",&m);
    printf("\n Enter the coefficients and exponents of the polynomial\n");
    for(i=0;i<m;i++)
    {

    	scanf("%d",&x2[i].coef);
    	scanf("%d",&x2[i].exp);
    }
    */
    printf("\nThe polynomial represenattion of first polynomial is\n");
    for(i=0; i<n-1; i++)
    {
        printf("%d*x^%d+",x1[i].coef,x1[i].exp);
    }
    printf("%d*x^%d",x1[n-1].coef,x1[n-1].exp);
    /*
    printf("\nThe polynomial represenattion of second polynomial is\n");
    for(i=0;i<m-1;i++)
    {
    printf("%d*x^%d+",x2[i].coef,x2[i].exp);
    }
    printf("%d*x^%d",x2[n-1].coef,x2[n-1].exp);
    */
//comparing
    /*
    if(x1[i].exp==x2[j].exp)
    {
    x3[k].coef=x1[i].coeff+x2[j].coeff;
    x3[k].exp=x1[i].exp;
    i=i+1;
    j=j+1;
    k=k+1;
    }
    */

    return 0;
}

