#include<stdio.h>
int main()
{
int n,i,k,mid,p=0,c=0;
c=c+2;
printf("enter the length of array");
scanf("%d",&n);
c++;
int a[n],left=0,right=n-1;
c=c+2;
for(i=0;i<n;i++)
{
printf("enter the element in ascending order");
scanf("%d",&a[i]);
c++;
}
c++;
printf("enter the element to be searched");
scanf("%d",&k);
c++;
for(i=0;i<n;i++)
{
mid=(left+right)/2;
c++;
if(k>a[mid])
{
 left=mid+1;
 c++;
 }
 if(k==a[mid])
 {
  p=p+1;
  c++;
  }
  if(k<a[mid])
  {
  right=mid-1;
  c++;
  }
  }
  c++;
  if(p>0)
  {
  printf("element found");
  
  }
  else
  {
  printf("element not found");
  }
  printf("\ntime complexity= %d",c);
  printf("\nspace complexity= %d",32+4*n);
  }

