// #include<stdio.h>
// void show( int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("hello recursion \n");
//         show(count-1);
//     }
// }
// int main()
// {
//     show(3);
//     return 0;
// }
// #include<stdio.h>
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (n*fact(n-1));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     printf("factorial of %d is ",fact(num));
//     return 0;
// }
// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//         printf("%d \t ",n+1);
//         n++;
//         even();
//     }
//     return;
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d \t ",n-1);
//         n++;
//         odd();
//     }
//     return;
// }
// int main()
// {
//     odd();
//     return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     else
//     {
    
//         printf("%d \n",n);
//         fun(n-1);
//     }
// }
// int main()
// {
//     fun(5);
//     return 0;

// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n>=0)
//     {
//         fun(n-1);
//         printf("%d\n",n);
//     }
// }
// int main()
// {
//     fun(5);
//     return 0;
// }
// #include<stdio.h>
// void toh(int n,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
//         toh(n-1,temp,beg,end);
//     }
// }
// int main()
// {
//     int n=2;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include<stdio.h>
// void show(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("hello recursion \n");
//         show(count-1);
//     }

// }
// int main()
// {
//     show(5);
//     return 0;
// }
// #include<stdio.h>
// int fact(int n)
// {
//     if(n==0)
//     {
//     return 1;
//     }
//     else
//     {
//         return (n*fact(n-1));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     printf("factorial of n is %d",fact(num));
//     return 0;
// }
// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//         printf("%d \t ",n+1);
//         n++;
//         even();
//     }
//     return;
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d \t ",n-1);
//         n++;
//         odd();
//     }
//     return;
// }
// int main()
// {
//     odd();
//     return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n>=0)
//     {
//         fun(n-1);
//         printf("%d \n",n);
//     }
// }
// int main()
// {
//     fun(5);
//     return 0;
// }
// #include<stdio.h>
// void toh(int n,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
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
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter the total no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("searching element");
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
// }
// #include<stdio.h>
// int main()
// {
//     int a[10]={10,20,30,40,50},f=0,lr=0,up=4,mid,item;
//     printf("searching element");
//     scanf("%d",&item);
//     while(lr<=up)
//     {
//         mid=(lr+up)/2;
//         if(a[mid]==item)
//         {
//             f=1;
    //         break;
    //     }
    //     if(a[mid]<item)
    //     {
    //         lr=mid+1;
    //     }
    //     else
    //     {
    //         up=mid-1;
    //     }
    // }
    // if(f==1)
    // {
    //     printf("item location %d",mid);
//     }
// }
// #include<stdio.h>
// void toh(int n,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
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
// void show(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("aman \n");
//         return show(count-1);
//     }
// }
// int main()
// {
//     show(3);
//     return 0;
// }
// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//         printf("%d \t",n+1);
//         n++;
//         even();
//     }
//     return;
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d \t",n-1);
//         n++;
//         odd();
//     }
//     return;
// }
// int main()
// {
//     odd();
//     return 0;
// }
// #include<stdio.h>
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//           return (n*fact(n-1));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the num");
//     scanf("%d",&num);
//     printf("factorial of num %d",fact(num));
//     return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("%d \n",n);
//         return fun(n-1);
//     }
// }
// int main()
// {
//     fun(3);
//     return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n>=0)
//     {
//         fun(n-1);
//         printf("%d \n",n);
//     }
// }
// int main()
// {
//     fun(4);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total number");
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
//     printf("sorted elements");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
    // printf("enter the total no");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d \n",&a[i]);
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //             swap=a[i];
    //             a[i]=a[j];
    //             a[j]=swap;
    //         }
    //     }

    // }
    // printf("sorted element");
    //   printf("enter the total no");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d \n",&a[i]);
    // }
// }
// #include<stdio.h>
// int main()
// {
    // int a[10],n,swap;
    // printf("enter the no");
    // scanf("%d",&n);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //             swap=a[i];
    //             a[i]=a[j];
    //             a[j]=swap;

//             }
//         }
//     }
//     printf("sorted elements");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i,j,swap;
//     printf("enter total no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d \n",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 swap=a[i];
//                 a[i]=a[j];
//                 a[j]=swap;
//             }
//         }
//     }
//     printf("sorted elements");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// void quicksort(int a[],int first,int last)
// {
//     int i,j,pivot,temp;
//     if(first<last)
//     {
//         pivot=first;
//         i=first;
//         j=last;
//         while(i<j)
//         {
//             while(a[i]<=a[pivot] && i<last)
//             i++;
//             while(a[j]<a[pivot])
//             j--;
//             if(i<j)
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//         temp=a[pivot];
//         a[pivot]=a[j];
//         a[j]=temp;
//         quicksort(a,0,j-1);
//         quicksort(a,j+1,last);
//     }

// }
// int main()
// {
//     int a[10],n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     quicksort(a,0,n-1);
//     printf("sorted element are \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter total no of element in array");
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
//     printf("sorted array\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no of element in array");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter searching item");
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
//     printf("enter total no of element in array");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("searching item");
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
//        printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10]={10,20,30,40,50},f=0,lr=0,up=4,mid,item;
//     printf("searching element");
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
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter no of element");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("searching element");
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
//     int a[10]={10,20,30,40,50},f=0,lr=0,up=4,mid,item;
//     printf("searching item");
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
//     else{
//         printf("item not found");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap,key,i,j;
//     printf("enter total no of element in array");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<n;i++)
//     {
//         key=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>key)
//         {
//             a[j+1]=a[j];
//             j=j-1;
//         }
//         a[j+1]=key;


//     }

//     printf("sorted item");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }

// #include<stdio.h>
// void mergesort();
// void merge();
// void mergesort(int a[],int first,int last)
// {
//     int mid;
//     if(first<last)
//     {
//         mid=(first+last)/2;
//         mergesort(a,first,mid);
//         mergesort(a,mid+1,last);
//         merge(a,first,mid,last);
//     }
// }
// void merge(int a[],int first,int mid,int last)
// {
//      int b[10],i,j,k;
//      i=first;
//      j=mid+1;
//      k=first;
//      while(i<=mid && j<=last)
//      {
//         if(a[i]<a[j])
//           b[k++]=a[i++];
//         else
//           b[k++]=a[j++];
//      }
//      if(i>mid)
//      {
//         while(j<=last)
//         b[k++]=a[j++];
//      }
//      else
//      {
//         while(i<=mid)
//         b[k++]=a[i++];

//      }
//      for(int i=first;i<=last;i++)
//      {
//          a[i]=b[i];
//      }
// }
// int main()
// {
//     int a[10],n;
//     printf("enter no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("sorted \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
    
// }
// #include<stdio.h>
// void quicksort(int a[],int first,int last)
// {
// int i,j,pivot,temp;
// if(first<last)
// {
//     i=first;
//     j=last;
//     pivot=first;
//     while(i<j)
//     {
//         while(a[i]<=a[pivot] &&i<last)
//         i++;
//         while(a[j]>a[pivot])
//         j--;
    
//     if(i<j)
//     {
//         temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//     }
//     temp=a[pivot];
//     a[pivot]=a[j];
//     a[j]=temp;
//     quicksort(a,0,j-1);
//     quicksort(a,j+1,last);
//     }

// }

// }
// int main()
// {
//     int a[10],n;
//     printf("enter no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("sorted \n");
//     quicksort(a,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
    
// }
// #include<stdio.h>
// void quicksort(int a[] ,int first,int last)
// {
//     int i,j,pivot,temp;
//     if(first<last)
//     {
//         i=first;
//         j=last;
//         pivot=first;
//         while(i<j)
//         {
//             while(a[i]<=a[pivot] && i<last)
//             i++;
//             while(a[j]>a[pivot])
//             j--;
//         }
//         if(i<j)
//         {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//         temp=a[pivot];
//         a[pivot]=a[j];
//         a[j]=temp;
//         quicksort(a,0,j-1);
//         quicksort(a,j+1,last);
//     }
// }
#include<stdio.h>
int main()
{
    printf("hello ");
}


















    



























