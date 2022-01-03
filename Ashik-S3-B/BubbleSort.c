#include <stdio.h>
int main()
{
	int ar[50],n,c,e,swp,cut=0;
	printf("Enter The No. Element of the Array : ");
	scanf("%d",&n);
	cut=cut++;
	for(c=0;c<n;c++)
	{
		scanf("%d",&ar[c]);
		cut=cut++;
	}
	cut=cut++;
	
	for(c=0;c<n-1;c++)
	{
		for (e=0;e<n-c-1;e++)
		{
			if(ar[e]>ar[e+1])
			{
				swp = ar[e];
				cut=cut++;
				ar[e]=ar[e+1];
				cut=cut++;
				ar[e+1]=swp;
				cut=cut++;
			}
			cut=cut++;
		}
		cut++;

	}
	cut=cut++;
	
	printf("\n Array is Sorted :\n");
	for (c=0;c<n;c++)

	{	
		printf("%d \n",ar[c]);
	}
	printf("\n%d\n",cut);
	printf("\nSpace 	Complexity : 240\n");
	return 0;
}
