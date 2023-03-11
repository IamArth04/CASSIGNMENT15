#include<stdio.h>
//int grt(int);
int grt(int a[10],int n)
{
    int i,max=a[0];
    //int a[10];
    for(i=0;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
    return max;
}
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers: ");
    for(i=0;i<=10;i++){
        scanf("%d",&a[i]);
    }
    s=sizeof(a)/sizeof(a[0]);
    printf("Highest value is %d",grt(a,s));
    printf("\n");
    return 0;
}
