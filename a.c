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
// void show(int choice)
// {
//     if(choice==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("hello everyone ....!\n");
//         show(choice-1);
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
//     printf("factorial %d",fact(num));
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
//         printf("%d \n",n);
//     }
// }
// int main()
// {
//     fun(5);
//     return 0;
// }
//  #include<stdio.h>
//  int a[10],n,value,choice,top;
//  void push()
//  {
//     if(top>=n-1)
//     {
//         printf("\n overflow");
//     }
//     else
//     {
//         printf("enter element you want to push :");
//         scanf("%d",&value);
//         top++;
//         a[top]=value;
//     }
//  }
//  void pop()
//  {
//     if(top==-1)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf("enter element you want to pop %d :",a[top]);
//         top--;
//     }
//  }
//  void display()
//  {
//     if(top==-1)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf(" \n stack elements are \n");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//         printf("\n plz enter next choice \n");
//     }
//  }
//  int main()
//  {
//     top=-1;
//     printf("\n enter total no. of element you want to insert");
//     scanf("%d",&n);
//     printf("\n\t 1.push\n\t 2.pop\n\t 3.display \n\t 4.exit");
//     do
//     {
//         printf("\n enter the choice :");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1 :
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
//                 printf("\n exit point \n");
//                 break;

//             }
//             default:
//             {
//                 printf("\n plz enter valid option \n");
//             }
//         }
//     } 
//     while(choice !=4);

//     return 0;   

 //  }
// #include<stdio.h>
// int a[10],n,choice,front=0,rear=0,i,j=1;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("\n overflow");
//     }
//     else
//     {
//         printf(" \n enter insert element ",j++);
//         scanf("%d",&a[rear++]);
//     }
// }
// void dequeue()
// {
//     if(front==rear)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf(" \n enter poped element %d",a[front++]);
//     }
// }
// void display()
// {
//     if(front==rear)
//     {
//         printf("\n underflow ");
//     }
//     else
//     {
//         printf("\n queue elements are \n");
//         for(i=front;i<rear;i++)
//         {
//             printf("%d \t",a[i]);
//         }
//         printf("\n plz enter next choice \n");
//     }
// }
// int main()
// {
//     printf("\n enter total elements you want to insert ");
//     scanf("%d",&n);
//     printf("\n\t 1.insert \n\t 2.delete \n\t 3.display \n\t 4.exit");
//     do
//     {
//         printf("\n enter the choice \n");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 enqueue();
//                 break;
//             }
//             case 2:
//             {
//                 dequeue();
//                 break;
//             }
//             case 3:
//             {
//                 display();
//                 break;
//             }
//             case 4:
//             {
//                 printf("\n exit point");
//                 break;
//             }
//             default:
//             {
//                 printf("\n plz enter valid choice");
//             }
//         }
//     }
//     while(choice !=4);

//     return 0;
    
// }
// #include<stdio.h>
// int main()
// {
//     int age=22;
//     int *ptr=&age;
//     int _age=*ptr;
//     printf("%d",_age);
//     return 0;

// }
// #include<stdio.h>
// int main()
// {
//     char star='*';
//     char *ptr=&star;
//     char _star=*ptr;
//     printf("%c",_star);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     float a=1.5f;
//     float *ptr=&a;
//     float _a=*ptr;
//     printf("%f",_a);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int age=22;
//     int *ptr=&age;
//     printf("%p",&age);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("%d \n",sizeof(int));
//     printf("%d \n",sizeof(float));
//     printf("%d \n",sizeof(char));


// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr= (int *) malloc(5*sizeof(int));
//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \n",ptr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *) malloc(5*sizeof(int));
//     ptr[0]=10;
//     ptr[1]=20;
//     ptr[2]=30;
//     ptr[3]=40;
//     ptr[4]=50;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",ptr[i]);

//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     float *ptr;
//     ptr=(float *) malloc(5*sizeof(float));
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;
//     for(int i=0;i<5;i++)
//     {
//         printf("%f \n",ptr[i]);
    
//     }
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *) calloc(5,sizeof(int));
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \n",ptr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     ptr=(int *) malloc(n*sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *) calloc(5,sizeof(int));
//     ptr[0]=10;
//     ptr[1]=20;
//     ptr[2]=30;
//     ptr[3]=40;

//     ptr[4]=50;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \n",ptr[i]);
//     }
//     free(ptr);
//     ptr=(int *) calloc(2,sizeof(int));
//     ptr[0]=11;
//     ptr[1]=22;
//     for(int i=0;i<2;i++)
//     {
//         printf("%d \n",ptr[i]);
//     }
//     return 0;

// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *) calloc(5,sizeof(int));

//     printf("enter number(5) :");
//     for(int i=0; i<5; i++){
//         scanf("%d",&ptr[i]);

//     }
//     ptr = realloc(ptr, 8);
//     printf("enter number(8) :");
//     for(int i=0; i<8; i++)
//     {
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0; i<8; i++)
//     {
//         printf("number %d is %d \n",i,ptr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *) calloc(5, sizeof(int));
//     printf("enter number 5 :");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     ptr = realloc(ptr, 3);
//     printf("enter number 3 :");
//     for(int i=0;i<3;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<3;i++)
//     {
//         printf("number %d is %d \n",i,ptr[i]);
//     }
//     return 0;
// }