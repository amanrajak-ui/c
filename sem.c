// #include<stdio.h>
// int a[10],n,choice,value,top=-1;
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
//         printf("under flow");
//     }
//     else
//     {
//         printf("deleted element %d",a[top]);
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
//         printf("stack element are \n");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//     }
// }
// int main()
// {
//     printf("enter total number");
//     scanf("%d",&n);
//     printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
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
//                 printf("exit");
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option");
//             }
//         }
//     }
//     while(choice !=4);
//     return 0;
// }
// #include<stdio.h>
// int a[10],n,value,choice,front=-1,rear=-1;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         printf("enter the value");
//         scanf("%d",&a[rear++]);
//     }
// }
// void dequeue()
// {
//     if(front==rear)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("deleted element %d \n",a[front++]);
//     }
// }
// void display()
// {
//     if(front==rear)
//     {
//         printf("under flow");
//     }
//     else
//     {
//     printf("queue elements are \n");
//     for(int i=front;i<rear;i++)
//     {
//         printf("%d \n",a[i]);
//     }
//     }
// }
// int main()
// {
//     printf("enter total no");
//     scanf("%d",&n);
//     printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit\n\t");
//     do
//     {
//         printf("enter the choice");
//         scanf("%d",&choice);
//         switch(choice)
// //         {
// //             case 1:
// //             {
// //                 enqueue();
// //                 break;
// //             }
// //             case 2:
// //             {
// //                 dequeue();
// //                 break;
// //             }
// //             case 3:
// //             {
// //                 display();
// //                 break;
// //             }
// //             case 4:
// //             {
// //                 printf("exit");
// //                 break;
// //             }
// //             default:
// //             {
// //                 printf("invalid option");
// //             }

// //         }

// //     }
// //     while(choice !=4);
// //     return 0;

// // }
// #include<stdio.h>
// int a[10],n,value,top=-1,choice;
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
//         printf("deleted element %d",a[top]);
//         top--;
//     }
// }
// void display()
// {
//       if(top==-1)
//       {
//         printf("underflow");
//       }
//       else
//       {
//         printf("stack elements");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \n",a[i]);
//         }
//       }
// }
// int main()
// {
//     printf("enter the no");
//     scanf("%d",&n);
//     printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
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
//                 printf("exit");
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option");
//             }
//         }
//     }
//     while(choice !=4);
//     return 0;
// }
// #include<stdio.h>
// int a[10],n,value,choice,front=-1,rear=-1;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         printf("enter the value");
//         scanf("%d",&a[rear++]);
//     }

// }
// void dequeue()
// {
//     if(front==rear)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("deleted element %d \n",a[front++]);
//     }
// }
// void display()
// {
//     if(front==rear)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("queue elements \n");
//         for(int i=front;i<rear;i++)
//         {
//             printf("%d \n",a[i]);
//         }
//     }
// }
// int main()
// {
//     printf("enter total no");
//     scanf("%d",&n);
//     printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit\n\t");
//     do
//     {
//         printf("enter the choice");
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
//                 printf("exit");
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option");
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
// struct node * head;
// void push()
// {
//     int value;
//     printf("enter the value");
//     scanf("%d",&value);
//     struct node * newnode=(struct node *)malloc(sizeof(struct node));
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
//         printf("deleted element %d",head->data);
//         temp=head;
//         head=head->link;
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
//         while(temp!=NULL)
//         {
//             printf("elements %d \n",temp->data);
//             temp=temp->link;
//         }

//     }
// }
// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
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
//                 exit(0);
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option");
//             }
//         }
      
//     }
    // return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struc       ptr=ptr->next;
//     }
// }
// int main()
// {
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     head=(struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third =(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=NULL;
//     traverse(head);

// }t node * next;
// };
// void traverse(struct node * ptr)
// {
//     while(ptr !=NULL)
//     {
//         printf("element %d \n",ptr->data);

//  #include<stdio.h>
//  #include<stdlib.h>
//  struct node
//  {
//     int data;
//     shile(ptr !=NULL)
//     {
//         printf("element %d \n",ptr->data);
//         ptr=ptr->link;
//     }
//  }
//  int main()truct node *link;
//  };
//  void traverse(struct node * ptr)
//  {
//     w
//  {
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->link=second;
//     second->data=20;
//     second->link=third;
//     third->data=30;
//     third->link=NULL;
//     traverse(head);
//  }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i=0,item;
//     printf("enter total no");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
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
//         printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10]={10,20,30,40,50},f=0,item,lr=0,up=4,mid;
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
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *  link;
// };
// struct node * head=NULL;
// void push()
// {
//     int value;
//     printf("enter the value");
//     scanf("%d",&value);
//     struct node * newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->data=value;
//     newnode->link=head;
//     head=newnode;
// }
// void pop()
// {
//     struct node * temp;
//     if(head==NULL)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         printf(" deleted element %d \n",head->data);
//         temp=head;
//         head=head->link;
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
//         while(temp!=NULL)
//         {
//             printf("element %d \n",temp->data);
//             temp=temp->link;
//         }
//     }
// }
// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
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
//                 exit(0);
//                 break;
//             }
//             default:
//             {
//                 printf("ivalid option");
//             }

//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * link;
// };
// struct node * front=NULL,* rear=NULL;
// void enqueue()
// {
//     int value;
//     printf("enter the value");
//     scanf("%d",&value);
//     struct node * newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->data=value;
//     newnode->link=NULL;
//     if(front==NULL && rear==NULL)
//     {
//         front=rear=newnode;
//     }
//     rear->link=newnode;
//     rear=newnode;
// }
// void dequeue()
// {
//     struct node * temp;
//     if(front==NULL)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         printf("deleted element %d \n",front->data);
//         temp=front;
//         front=front->link;
//         free(temp);
//     }
// }
// void display()
// {
//     struct node * temp;
//     temp=front;
//     if(front==NULL)
//     {
//         printf("underflow");
//     }
//     else
//     {
//         while(temp!=NULL)
//         {
//             printf("elementds %d \n",temp->data);
//             temp=temp->link;
//         }
//     }
// }
// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit\n\t");
        // printf("enter the choice");
        // scanf("%d",&choice);
        // switch(choice)
        // {
        //     case 1:
        //     enqueue();
            // break;
            // case 2:
            // dequeue();
            // break;
            // case 3:
            // display();
            // break;
            // case 4:
            // exit(0);
            // break;
            // default:
            // printf("invalid option");
        
        
//         }
//     }
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
//     printf("enterthe no.");
//     scanf("%d",&num);
//     printf("factorial %d",fact(num));
// //     return 0;
// // }
// #include<stdio.h>
// int n=1;
// void even();
// void odd();
// void odd()
// // {
// //     if(n<=10)
// //     {
// //         printf("%d \n",n+1);
// //         n++;
// //         even();
// //     }
// //     return;
// // }
// // void even()
// // {
// //     if(n<=10)
// //     {
// //         printf("%d \n",n-1);
// //         n++;
// //         odd();
// //     }
// //     return;
// // }
// // int main()
// // {
// //     odd();
// //     return 0;
// // }
// // #include<stdio.h>
// // void fun(int n)
// // {
// //     if(n==0)
// //     {
// //         return;
// //     }
// //     else
// //     {
// //         printf("%d\n",n);
// //         return fun(n-1);
// //     }
// // }
// // int main()
// // {
// //     fun(5);
// //     return 0;
// // }
// // #include<stdio.h>
// // void fun(int n)
// // {
// //     if(n>=0)
// //     {
// //         fun(n-1);
// //         printf("%d \n",n);
// //     }
// // }
// // int main()
// // {
// //     fun(4);
// //     return 0;
// // }
// // #include<stdio.h>
// // void toh(int n,char beg,char temp,char end)
// // {
// //     if(n>=1)
// //     {
// //         toh(n-1,beg,end,temp);
// //         printf("%d %c to %c \n",n,beg,end);
// //         toh(n-1,temp,beg,end);
// //     }
// // }
// // int main()
// // {
// //     int n=2;
// //     toh(n,'A','B','C');
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,item,value,i=0;
//     printf("enter total no.");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
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
//     int a[10]={10,20,30,40,50},f=0,lr=0,up=4,mid,item;
//     printf("enter searching item");
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
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return 0;
// }

// #include<stdio.h>
// void sort(int a[], int n)
// {
//     int i,j,key;
//     for(int i=1;i<n;i++)
//     {
//         key=a[i];
//         j=i-1;
    
//     while(j>=0 && a[j]> key)
//     {
//         a[j+1]=a[j];
//         j=j-1;
//     }
//     a[j+1]=key;
//     }
// }
// int main()
// {
//     int a[10],n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++)
//     {
//         scanf("%d\n",&a[i]);

//     }

    
//     sort(a,n);

//     printf("sorted element \n");
//     for(int i=0;i<=n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       