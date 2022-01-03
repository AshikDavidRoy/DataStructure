#include <stdio.h>
int main()
{
int i,j,m,n,sm=0;
int a[10][10];
int b[10][10];
	printf("Enter the numbers of rows and columes of the martix : \n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of the Martix : \n");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}

			}
			printf("\t\n The Martix is : \t\n");
			 for(i=0;i<m;i++) 
			{
				printf("\n");
				for(j=0;j<n;j++)
				
				{
					
					printf("%d\t",a[i][j]);
					
				}
				printf("\n");
					
				}
				
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
				
					if(a[i][j]!=0)
					{
					b[sm][0]=a[i][j];
					b[sm][1]= i;
					b[sm][2]=j;
					sm++;
					
					}
				
				}
				

			}
			printf("\t\n The Sparse Martix is : \t\n");
			
			for(i=0;i<m;i++)
			{
				printf("\n");
				for(j=0;j<n;j++)
				
				{
					
					printf("%d\t",b[i][j]);
					
				}
					printf("\n");
					
				}
			
}
