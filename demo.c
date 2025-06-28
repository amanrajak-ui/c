// #include<stdio.h>
// int a[10],n,value,choice,top;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("\n\t overflow");
//     }
//     else
//     {
//         printf("enter the element to be pushed :");
//         scanf("%d",&value);
//         top++;
//         a[top]=value;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         printf("\n\t underflow");
//     }
//     else
//     {
//         printf("popped element is %d",a[top]);
//         top--;
//     }
// }
// void display()
// {
//     if(top==-1)
//     {
//         printf("\n\t underflow");
//     }
//     else
//     {
//         printf("\n\t stack elements are :");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//         printf("enter next choice");
//     }
// }
// int main()
// {
//     top=-1;
//     printf("total no. of elements \n\t");
//     scanf("%d",&n);
//     printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
//     do
//     {
//         printf("\n\t enter the choice");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 push();
//                 break;
//             }
//             case 2:
//             {
//                 pop();
//                 break;
//             }
//             case 3:
//             {
//                 display();
//                 break;
//             }
//             case 4:
//             {
//                 printf("\n\t end point");
//                 break;
//             }
//             default:
//             {
//                 printf("\n\t plz enter valid choice");
//             }
//         }
//     }
//     while(choice!=4);
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
//     int a[5],n,i=0,item;
//     printf("enter total number :");
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
//     int a[5]={10,20,30,40,50},f=0,lr=0,up=4,mid,item;
//     printf("enter searching element");
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
//     int a[5]={20,10,30,40,50},f=0,item,lr=0,up=4,mid;
//     printf("enter searching element");
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
//     printf("factorial is %d",fact(num));
//     return 0;
// }
// #include<stdio.h>
// void show(int choice)
// {
//     if(choice==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("learing dsa... \n");
//         show(choice -1);
//     }
// }
// int main()
// {
//     show(5);
//     return 0;
// }

// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//   if(n<=10)
//   {
//     printf("%d \t",n+1);
//     n++;
//     even();
//   }
// }
// void even()
// {
//   if(n<=10)
//   {
//     printf("%d\t",n-1);
//     n++;
//     odd();
//   }
// }
// int main()
// {
//   odd();
//   return 0;
// }
// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//   if(n<=10)
//   {
//   printf("%d \t",n+1);
//   n++;
//   even();
//   }
//   return ;
// }
// void even()
// {
//   if(n<=10)
//   {
//     printf("%d \t",n-1);
//     n++;
//     odd();
//   }
//   return ;
// }
// int main()
// {
//   odd();
//   return 0;
// }
// #include<stdio.h>
// int n=1;
// void odd();
// void even();
// void odd()
// {
//   if(n<=10)
//   {
//     printf("%d \t",n+1);
//     n++;
//    even();
//   }
//   return;
// }
// void even()
// {
//   if(n<=10)
//   {
//     printf("%d \t",n-1);
//     n++;
//     odd();
//   }
//   return;
// }
// int main()
// {
//   odd();
//   return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//   if(n==0)
//   {
//     return;
//   }
//   else
//   {
//     printf("%d\n",n);
//     return fun(n-1);
//   }
// }
// int main()
// {
//   fun(3);
//   return 0;
// }
#include<stdio.h>
void fun(int n)
{
  if(n>=0)
  {
    fun(n-1);
    printf("%d\n",n);
  }
}
int main()
{
  fun(5);
  return 0;
}