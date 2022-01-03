#include <stdio.h>

int main()
{
	int i,j,n,loc,swp,cut=0;
	int ar[n];
	printf("Enter The No. Element of the Array(n) : \n");
	scanf("%d",&n);
	cut++;
	printf("Enter The %d Element of the Array : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		cut++;
	}
			
	for(i=0;i<n-1;i++)
	{
		loc=i;
		cut++;
		for(j=i+1;j<n;j++)				
		{					
			if(ar[loc]>ar[j])
			{
				loc=j;
				cut++;
			}
				cut++;
		}
				cut++;
		if(loc!=i)
		{
			swp=ar[loc];
			cut++;
			ar[loc]=ar[i];
			cut++;
			ar[i]=swp;
			cut++;
		} 
		cut++;
	}	
		cut++;
	

	for(i=0;i<n;i++){
	printf("%d\t",ar[i]);
	}
	printf("%d",cut);
	printf("Space 	Complexity : %d",24*n);
	return 0;
}

