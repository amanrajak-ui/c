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
//             while(a[j]>a[pivot])
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
//             while(a[i]<=a[pivot] && i< last)
//             i++;
//             while(a[j]>a[pivot])
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
//     printf("sorted elements are : \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
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
//     int b[50];
//     int i,j,k;
//     i=first;
//     j=mid+1;
//     k=first;
//     while(i<=mid && j<=last)
//     {
//         if(a[i]<=a[j])
//         {
//             b[k++]=a[i++];
//         }
//         else
//         {
//             b[k++]=a[j++];
//         }
//     }
//     if(i>mid)
//     {
//         while(j<=last)
//         {
//             b[k++]=a[j++];
//         }
//     }
//     else
//     {
//         while(i<=mid)
//         {
//             b[k++]=a[i++];
//         }
//     }
//     for(int i=first;i<=last;i++)
//     {
//         a[i]=b[i];
//     }

// }
// int main()
// {
//     int a[20],n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//        scanf("%d",&a[i]);
//     }
//     mergesort(a,0,n-1);
//     printf("sorted elements are :\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }

//  #include<Stdio.h>
//  int getmax(int a[],int n)
//  {
//     int max=a[0];
//     for(int i=1;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     return max; //maximum element from the array
//  }
//  void countsort(int a[],int n)
// {
//     int output[n+1];
//     int max=getmax(a,n);
//     int count[max+1];

//     for(int i=0;i<=max;++i)
// }
#include<stdio.h>
int main()
{
    int a[10],n,sum=0;
     printf("enter the total no");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d \n",&a[i]);
    }
     
    printf("array elements :");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d :",sum);

    return 0;
}