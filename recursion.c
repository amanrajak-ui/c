// #include<stdio.h>
// void show(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     printf("hello world \n");
//     show(count-1);
// }
// int main()
// {
//     show(5);
//     return 0;
// }
// #include<stdio.h>
// void display(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     printf("hello recursion\n");
//     display(count-1);
// }
// int main()
// {
//     display(3);
//     return 0;
// }
// #include<stdio.h>
// void sum(int x , int y)
// {
//     printf("%d",x+y);
// }
// int main()
// {
//     sum(10,20);
//     return 0;
// }
// #include<stdio.h>
// void show(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     printf("hey");
//     show(count-1);
// }
// int main()
// {
//     show(3);
//     return 0;
// }
// #include<stdio.h>
// void show(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else{
//         printf("hello \n");
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
//     printf("factorial %d",fact(num));
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
//     printf("factorial %d",fact(num));
//     return 0;
// }
// #include<stdio.h>
// int fibo(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return (fibo(n-1)+fibo(n-2));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the number");
//     scanf("%d",&num);
//     for(int i=0;i<num;i++)
//     {
//         printf("%d \n",fibo(i));

//     }
//     return 0;
// }
// #include<stdio.h>
// void toh(int n ,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
//         toh(n-1,beg,temp,end);

//     }
// }
// int main()
// {
//     int n=3;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include <stdio.h>  
// // declaration of the odd and even() function  
// void odd(); // Add 1 when the function is odd()   
// void even(); // Subtract 1 when the function is even  
// int num = 1; // global variable   
// void odd ()  
// {     
//     // if statement check and execute the block till n is less than equal to 10  
//     if (num <= 10)  
//     {  
//         printf (" %d ", num + 1);  // print a number by adding 1  
//         num++; // increment by 1  
//         even(); // invoke the even function  
//     }  
//     return;  
// }  
// void even ()  
// {  
//     // if block check the condition that n is less than equal to 10  
//     if ( num <= 10)  
//     {  
//         printf (" %d ", num - 1); // print a number by subtracting 1   
//         num++;  
//         odd(); // call the odd() function  
//     }  
//     return;  
// }  
// int main ()  
// {  
//     odd(); // main call the odd() function at once  
//     return 0;  
// }  
// #include<stdio.h>
// int n=1;
// void odd()
// {
//     if(n <=10)
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
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//        printf("%d\t",n+1);
//         n++;
//         even();
//     }
//     return; 
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d\t",n-1);
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
// int fun(int n);
// int fun(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("%d",n);
//         return fun(n-1);
//     }
// }
// int main()
// {
//     fun(3);
//     return 0;
// }
// #include <stdio.h>  
// void fun1( int num)  
// {  
//     if (num == 0)  
//         return;  
//     else  
//         printf ("\n Number is: %d", num);  
//     return fun1 (num - 1);      
// }  
// int main ()  
// {  
//     fun1(7); 
//     return 0;  
// } 
// #include<stdio.h>
// void fun(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     else{
//     printf("\n%d",n);
//     return fun(n-1);
//     }

// } 
// int main()
// {
//     fun(3);
//     return 0;
// }
// #include <stdio.h>  
// void head_fun (int num)  
// {  
// if ( num >= 0 )  
// {  
// // Here the head_fun() is the first statement to be called  
// head_fun (num -1);  
// printf (" %d", num);  
// }  
// }  
// int main ()  
// {  
// // int a = 5;  
// // printf (" Use of Non-Tail/Head Recursive function \n");  
// head_fun (3); // function calling  
// return 0;  
// }  
// #include<stdio.h>
// void toh(int n ,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
//         toh(n-1,beg,temp,end);

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
//         printf("hello love \n");
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
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//     printf("%d\t",n+1);
//     n++;
//     even();
//     }
//     return;
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d\t",n-1);
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
// int n=1;
// void odd();
// void even();
// void odd()
// {
//     if(n<=10)
//     {
//     printf("%d\t",n+1);
//     n++;
//     even();
//     }
//     return;
// }
// void even()
// {
//     if(n<=10)
//     {
//         printf("%d\t",n-1);
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
//         printf("%d\n",n);
//         return fun(n-1);
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
//     if(n==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("%d\n",n);
//         return fun(n-1);
//     }
// }
// int main()
// {
//     fun(10);
//     return 0;
// }
// #include<stdio.h>
// void fun(int n)
// {
//     if(n>=0)
//     {
//         fun(n-1);
//         printf("%d",n);
//     }
// }
// int main()
// {
//     fun(5);
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
// }
// #include<stdio.h>
// void toh(int n,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
//         toh(n-1,beg,temp,end);
//     }
// }
// int main()
// {
//     int n=3;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include<stdio.h>
// void toh(int n,char beg,char temp,char end)
// {
//     if(n>=1)
//     {
//         toh(n-1,beg,end,temp);
//         printf("%d %c to %c \n",n,beg,end);
//         toh(n-1,beg,temp,end);
//     }

// }
// int main()
// {
//     int n=4;
//     toh(n,'A','B','C');
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,swap;
//     printf("enter the number you want");
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
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,swap;
//     printf("enter the number you want to insert in the array");
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
//     printf("sorted element \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     return 0;
// }
