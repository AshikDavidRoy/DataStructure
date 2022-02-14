#include <stdio.h>
int main()
{
	int ar[50],n,c,e,swp,cut=0;
	printf("Enter The No. Element of the Array : ");
	cut++;
	scanf("%d",&n);
	cut++;
	for(c=0;c<n;c++)
	{cut++;
		scanf("%d",&ar[c]);
		cut=cut++;
	}
	cut=cut++;
	
	for(c=0;c<n-1;c++)
	{cut++;
		for (e=0;e<n-c-1;e++)
		{cut++;
			if(ar[e]>ar[e+1])
			{cut++;
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
	cut++;
	for (c=0;c<n;c++)

	{	cut++;
		printf("%d \n",ar[c]);
	 cut++;
	}
	cut++;
	cut++;
	cut++;
	printf("\n%d\n",cut);
	printf("\nSpace Complexity : 240\n");
	return 0;
}
