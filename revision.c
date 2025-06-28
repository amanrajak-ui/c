// #include<stdio.h>
// int a[10],top,n,item,choice;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("\n\t overflow");
//     }
//     else
//     {
//         printf("enter pushed elements \n\t");
//         scanf("%d",&item);
//         top++;
//         a[top]=item;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//     printf("\n\t underflow");
//     }
//     else
//     {
//       printf("popped elements %d\n",a[top]);
//       top--;
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
//         printf(" stack elements are \n\t:");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d\n",a[i]);
//         }
//         printf("enter next option \n\t");

//     }
// }
// int main()
// {
//     top=-1;
//     printf("enter total element you want to insert " );
//     scanf("%d",&n);
//     printf("\n\t 1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
//     do
//     {
//         printf("\n\t please enter the choice ");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 push();
//                 break;
//             }
//              case 2:
//             {
//                 pop();
//                 break;
//             }
//              case 3:
//             {
//                 display();
//                 break;
//             }
//              case 4:
//             {
//                 printf("\n\t exit point");
//                 break;
//             }
//             default :
//             {
//                 printf("please enter valid choice");
//             }




//         }

//     }
//     while(choice !=4);
//     return 0;
    
// }
// #include<stdio.h>
// int a[10],n,choice,front=0,rear=0,i,j=1;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("\n queue is full");
//     }
//     else
//     {
//         printf("\n enter pushed element :",j++);
//         scanf("%d",&a[rear++]);
//     }
// }
// void dequeue()
// {
//     if(front==rear)
//     {
//         printf("\n queue is empty");

//     }
//     else
//     {
//         printf("\n popped element is %d",a[front++]);
//     }
// }
// void display()
// {
//     if(front==rear)
//     {
//         printf("\n queue is empty");
//     }
//     else
//     {
//         printf("\n queue elements are");
//         for(i=front;i<rear;i++)
//         {
//             printf("%d \n",a[i]);
//         }
//         printf("\n enter next choice \n");
//     }
// }
// int main()
// {
//     printf("enter the number");
//     scanf("%d",&n);
//     printf("\n\t1.insert\n\t2.delete\n\t3.display\n\t4.exit");
//     do
//     {
//         printf("\n enter the choice ");
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
//                 printf("\n exit point \n");
//                 break;
//             }
//             default:
//             {
//                 printf("plz enter valid option \n");
//             }
//         }
//     }
//     while(choice !=4);

//     return 0;
// }
// #include<stdio.h>
// int a[10],n,value,choice,top;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("\n overflow \n");
//     }
//     else
//     {
//         printf("enter pushed elements :");
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
//         printf("\n popped element is %d",a[top]);
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
//         printf("\n stack elements are : \n");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d \t",a[i]);
//         }
//         printf("\n plz enter next choice \n");
//     }
// }

// int main()
// {
//     top=-1;
//     printf("enter total element u want to insert :");
//     scanf("%d",&n);
//     printf("\n\t1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
//     printf("\n");
//     do
//     {
//         printf(" \n enter the choice :");
//         scanf("%d",&choice);
//        switch(choice)
//        {
//         case 1 :
//         {
//             push();
//             break;
//         }
//         case 2:
//         {
//             pop();
//             break;
//         }
//         case 3:
//         {
//             display();
//             break;
//         }
//         case 4:
//         {
//             printf("\n exit point \n");
//             break;
//         }
//         default:
//         {
//             printf("\n plz enter valid choice \n");
//         }
//        }

//     }
//     while(choice !=4);

//     return 0;
// // }
// #include<stdio.h>
// int a[10],n,choice,front=0,rear=0;
// void enqueue()
// {
//     if(rear==n-1)
//     {
//         printf("\n overflow");
//     }
//     else
//     {
//         printf("\n enter pushed element :");
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
//         printf("deleted element is %d",a[front++]);
//     }
// }
// void display()
// {
//     if(front==rear)
//     {
//         printf("\n underflow");
//     }
//     else
//     {
//         printf("\n queue elements are :");
//         for(int i=front;i<rear;i++)
//         {
//             printf("%d \n",a[i]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     printf("\n enter total number in array");
//     scanf("%d",&n);
//     printf("\n1.insert\n2.delete\n3.display\n4.exit");
//     printf("\n");
//     do
//     {
//         printf("\n enter the choice");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             {
//                 enqueue();
//                 break;
//             }
//              case 2:
//             {
//                 dequeue();
//                 break;
//             }
//             case 3:
//             {
//                 display();
//                 break;
//             }
//              case 4:
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
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void linklistTraverse(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
    linklistTraverse(second);
    return 0;
}*/