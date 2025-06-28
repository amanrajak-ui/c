// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total element in array");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter searching element");
//     scanf("%d",&item);
//     while(i<n)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=n)
//     {
//         printf("item not found");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int a[10],n,i=0,item;
    printf("enter total no. in array");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("enter searching element");
    scanf("%d",&item);
    while(i<n)
    {
        if(a[i]==item)
        {
            printf("item location %d",i);
            break;
        }
        i++;
    }
    if(i>=n)
    {
        printf("item not found");
    }
    return 0;
}