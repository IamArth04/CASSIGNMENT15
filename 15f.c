#include <stdio.h>

void main()
{
   int i,n,a[100];
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :",n);
   for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
	  }
   printf("The values store into the array in reverse are :");
   for(i=n-1;i>=0;i--)
      {
	   printf("%d ",a[i]);
	  }
} 