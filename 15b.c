#include<stdio.h>
//int grt(int);
int small(int a[10],int n)
{
    int i,min=a[0];
    //int a[10];
    for(i=0;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    return min;
}
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers: ");
    for(i=0;i<=10;i++){
        scanf("%d",&a[i]);
    }
    s=sizeof(a)/sizeof(a[0]);
    printf("lowest value is %d",small(a,s));
    printf("\n");
    return 0;
}
