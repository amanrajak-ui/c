#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},f=0,item,lr=0,up=4,mid;
    printf("enter searching element");
    scanf("%d",&item);
    while(lr<=up)
    {
        mid=(lr+up)/2;
        if(a[mid]==item)
        {
            f=1;
            break;
        }
        if(a[mid]<item)
        {
            lr=mid+1;
        }
        else
        {
            up=mid-1;
        }
    }
    if(f==1)
    {
        printf("item location %d",mid);
    }
    else
    {
        printf("not found");
    }
    return 0;
}