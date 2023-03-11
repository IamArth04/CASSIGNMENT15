#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,1,2,6};
    int i,j,count=0;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<=7;j++)
        {
            if(a[i]==a[j])
                count++;
        }
    }
    printf("%d ",count);
    
   return 0;
}