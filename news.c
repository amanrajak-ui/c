#include<stdio.h>
int main()
{
    int a[10],n;
    printf("total element");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n array element \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
    }
    printf("sum : %d",sum);
    float avg;
    avg=sum/n;
    printf("average :%f",avg);
    return 0;
}