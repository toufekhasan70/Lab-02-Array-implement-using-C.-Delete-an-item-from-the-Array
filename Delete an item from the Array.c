#include<stdio.h>
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100},size=10,pos,i;
    printf("Enter the Delete position :");
    scanf("%d",&pos);
    for(i=pos-1;i<=size-2;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=0;
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
