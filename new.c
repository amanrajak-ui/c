// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total no. you want to insert");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1-i;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 swap=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=swap;
//             }
//         }
//     }
//     printf("|n sorted element");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);

//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total no. to insert");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 swap=a[i];
//                 a[i]=a[j];
//                 a[j]=swap;
//             }
//         }
//     }
//     printf(" sorted");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total no. to be inserted :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
// //     {
// //         for(int j=0;j<n-1-i;j++)
// //         {
// //             if(a[j]>a[j+1])
// //             {
// //                 swap=a[j];
// //                 a[j]=a[j+1];
// //                 a[j+1]=swap;
// //             }
// //         }
// //     }
// //     printf("\n sorted element");
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("%d",a[i]);
// //     }
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total no to be inserted");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 swap=a[i];
//                 a[i]=a[j];
//                 a[j]=swap;
//             }
//         }
//     }
//     printf("\n sorted element \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter the no. you want to insert");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//      printf("enter searching element");
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
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no. to insert");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter seraching element");
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
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no. to be inserted");
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
// // #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},f=0,lr=0,up=4,item,mid;
//     printf("enter seraching item");
//     scanf("%d",&item);
//     while(lr<=up)
//     {
//         mid=lr+up/2;
//         if(a[mid]==item)
//         {
//             f=1;
//             break;
//         }
//         if(a[mid]<item)
//         {
//             lr=mid+1;
//         }
//         else
//         {
//             up=mid-1;
//         }
//     }
//     if(f==1)
//     {
//         printf("item location %d",mid);
//     }
//     else
//     {
//         printf("item not found");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no. to be inserted");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
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
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},item,f=0,lr=0,up=4,mid;
//     printf("enter seraching element");
//     scanf("%d",&item);
//     while(lr<=up)
//     {
//         mid=(lr+up)/2;
//         if(a[mid]==item)
//         {
//             f=1;
//             break;
//         }
//         if(a[mid]<item)
//         {
//             lr=mid+1;
//         }
//         else
//         {
//             up=mid-1;
//         }
//     }
//     if(f==1)
//     {
//         printf("item location %d",mid);
//     }
//     else
//     {
//         printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>

//     void toh(int n,char beg,char temp,char end)
//     {
//         if(n>=1)
//         {
//             toh(n-1,beg,end,temp);
//             printf("%d %c to %c \n",n,beg,end);
//             toh(n-1,temp,beg,end);
//         }
//     }
// int main()
// {
//     int n=3;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include<stdio.h>
// void toh(int n,char beg,char end, char temp)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n ",n,beg,end);
//         toh(n-1,temp,beg,end);
//     }
// }
// int main()
// {
//     int n=3;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include<stdio.h>
// void show(int choice)
// {
//     if(choice ==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("hello data structure ! \n" );
//         show(choice -1);
//     }
    
// }
// int main()
// {
//     show(5);
//     return 0;
// }


