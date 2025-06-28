// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no");
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
//             printf("item location %d ",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=n)
//     {
//         printf("itm not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,item,i=0;
//     printf("enter the no. :");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("searching elements");
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
//     int a[5]={11,22,33,44,55},item,f=0,lr=0,up=4,mid;
//     printf("seraching elements");
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
//     printf("enter total no ");
//     scanf("%d",&n);
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("searching elements");
//     scanf("%d",&item);
//     while(i<n)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
// //         i++;
// //     }
// //     if(i>=n)
// //     {
// //         printf("item not found");

// //     }
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},f=0,lr=0,up=4,item,mid;
//     printf("enter searching elements");
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
// //     else
// //        printf("item not found");
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
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
// //     printf("sorted elements");
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("%d \n",a[i]);
// //     }
// //     return 0;

// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter the no. :");
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
    // }
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
//     printf("enter the elements");
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
//     printf("sorted elements");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,swap;
//     printf("enter the number");
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
// //                 a[j]=swap;
//             }
// //         }
//     }
//     printf("sorted elements");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// void fun(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else
//     {
//         printf(" hello dsa ! \n");
//         fun(count-1);
//     }
// }
// int main()
// {
//     fun(5);
//     return 0;
// }
// #include<stdio.h>
// void fun(int count)
// {
//     if(count==0)
//     {
//         return;
//     }
//     else
//     {
//         printf("ds \n");
//         fun(count-1);
//     }
// }
// int main()
// {
//     fun(5);
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
//         return ;
//     }
//     else
//     {
//         printf("%d \n",n);
//         return fun(n-1);
//     }
// }
// int main()
// {
//     fun(4);
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
// // }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void traverse(struct node * ptr)
// {
//     while(ptr !=NULL)
//     {
//         printf("data : %d \n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main()
// {
//     struct node * head;
//     struct node *second;
//     struct node *third;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=NULL;
//     traverse(head);
// }
// #include<stdio.h>
// int a[10],n,choice,value,top;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         printf("enter the value");
//         scanf("%d",&value);
//         top++;
//         a[top]=value;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("deleted element %d ",a[top]);
//         top--;
//     }
// }
// void display()
// {
//     if(top==-1)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("stack elements");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//     }
// }
// int main()
// {
//      top=-1;
//     printf("enter the no");
//     scanf("%d",&n);
//     printf("\n\t1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
//     printf("\n");
//     do 
//     {
//         printf("enter the choice");
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
//                 printf(" \n exit \n");
//                 break;
//             }
//             default:
//             {
//                 printf("plz enter valid chioce \n");
//             }
//         }
//     }
//     while(choice !=4);
//     return  0;
// }
// #include<stdio.h>
// int a[10],n,choice,top,value;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("\n overflow \n");
//     }
//     else
//     {
//         printf("enter the value :");
//         scanf("%d",&value);
//         top++;
//         a[top]=value;
    
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf("deleted element is %d",a[top]);
//         top--;
//     }
// }
// void display()
// {
//     if(top==-1)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf("stack elements: ");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//     }
// }
// int main()
// {
//     top=-1;
//     printf("enter the number :");
//     scanf("%d",&n);
//     printf("\n\t1.push \n\t2.pop \n\t3.display \n\t4.exit");
//     printf("\n");

//     do 
//     {
//         printf("enter the choice");
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
//                 printf("\n exit");
//             }
//             default:
//             {
//                 printf("\n plz valid choice");
//             }
//         }
//     }
//     while(choice !=4);
//     return 0;
// }
// #include<stdio.h>
// int a[10],n,choice,front=-1,rear=-1;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         printf("enter the value to insert");
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
//         printf("deleted element %d",a[front++]);
//     }
// }
// void dispaly()
// {
//     if(front==rear)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("\n queue elements :");
//         for(int i=front;i<rear;i++)
//         {
//             printf("%d \n",a[i]);
//         }
//     }
// }
// int main()
// {
//     printnter the no:");
//     scanf("%d",&n);
//     printf(f("e"\n\t1.enqueue \n\t2.dequeue \n\t 3.display \n\t 4.exit \n\t");
//     do 
//     {
//         printf("enter hte choice");
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
//                 dispaly();
//                 break;
//             }
//             case 4:
//             {
//                 printf("exist");
//                 break;
//             }
//             default:
//             {
//                 printf("plz enter valid choice");
//             }
//         }
//     }
//     while(choice !=4);
//     return 0;

// }

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node * link;
// };
// struct node * head=NULL;
// void push()
// {
//     int value;
//     struct node * newnode=(struct node*)malloc(sizeof(struct node));
//     printf("enter the value");
//     scanf("%d",&value);
//     newnode->data=value;
//     newnode->link=head;
//     head=newnode;

    
// }
// void pop()
// {
//     struct node * temp;
//     if(head==NULL)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("deleted %d",head->data);
//         temp=head;
//        head=head->link;
//         free(temp);
//     }
// }
// void display()
// {
//     struct node * temp;
//     temp=head;
//     if(head==NULL)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         while(temp !=NULL)
//         {
//             printf("%d \n",temp->data);
//             temp=temp->link;
//         }
//     }
// } 
// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("\n\t1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
//         printf("\n");
//         printf("enter the choice");
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
//                 exit(1);
//                 break;
//             }
//             default:
//             {
//                 printf("invalid choice");
//             }
//         }
//     }
// }

