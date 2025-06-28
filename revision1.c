
// #include<stdio.h>
// int a[10],n,value,choice,top;
// void push()
// {
//     if(top>=n-1)
//     {
//         printf("overflow \n");
//     }
//     else
//     {
//         printf("enter the no. to insert : ");
//         scanf("%d",&value);
//         top++;
//         a[top]=value;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         printf("underflow \n");
//     }
//     else
//     {
//         printf("deleted element are %d",a[top]);
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
//         printf("stack elements are : \n ");
//         for(int i=top;i>=0;i--)
//         {
//             printf("%d\n",a[i]);
//         }
//     }
// }
// int main()
// {
//     top=-1;
//     printf("enter the no into stack : ");
//     scanf("%d",&n);
//     printf("1.push \n\t 2.pop \n\t 3.display \n\t 4.exit \n\t");
//     do
//     {
//         printf("enter the choice \n");
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
//                 printf("exit\n");
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option \n");
//             }
//         }
        
//     }
//     while(choice!=4);
//     return 0;

    
// }
/*#include<stdio.h>
int a[10],n,choice,top,value;
void push()
{
    if(top>=n-1)
    {
        printf("overflow");
    }
    else
    {
        printf("enter the no to insert : ");
        scanf("%d",&value);
        top++;
        a[top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("delelted element %d\n",a[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("stacks elements are :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d \n",a[i]);
        }

    }
}
int main()
{
    top=-1;
    printf("enter the no of element in array \n");
    scanf("%d",&n);
    printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n\t");
    do
    {
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("exit\n");
                break;
            }
            default:
            {
                printf("invalid option");
            }
        }
    }
    while(choice !=4);
    return 0;
   
    
}*/
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
//         printf("inter the elements : ");
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
//         printf("deleted element is %d \n",a[front++]);
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
//         printf("queue elements are : ");
//         for(int i=front;i<rear;i++)
//         {
//             printf("%d\n",a[i]);
//         }
//     }
// }
// int main()
// {
//     printf("enter the no into array");
//     scanf("%d",&n);
//     printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit\n\t");
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
//     } while (choice!=4);
//     return 0;
// }
/*#include<stdio.h>
int a[10],n,choice,front=-1,rear=-1;
void enqueue()
{
    if(rear==n-1)
    {
        printf("overflow");
    }
    else
    {
        printf("inser the element");
        scanf("%d",&a[rear++]);
    }
}
void dequeue()
{
    if(front==rear)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted element %d",a[front++]);

    }
}
void display()
{
    if(front==rear)
    {
        printf("underflow");
    }
    else
    {
        printf("queue elements are : ");
        for(int i=front;i<rear;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
int main()
{
    printf("enter the number into array");
    scanf("%d",&n);
    printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit\n\t");
    do
    {
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
        
            }
            case 4:
            {
                printf("exit");
                break;
            }
            default:
            {
                printf("invalid option");
            }

        }
    }
    while(choice !=4);
    return 0;
    
}*/
/*#include<stdio.h>
void toh(int n,char beg,char temp,char end)
{
    if(n>=1)
    {
        toh(n-1,beg,end,temp);
        printf("%d %c to %c\n",n,beg,end);
        toh(n-1,temp,beg,end);
    }
}
int main()
{
    int n=2;
    toh(n,'A','B','C');
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a[10],n,swap;
    printf("enter the total number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("sorted elements are : \n");
    for(int i=0;i<=n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}*/
// #include<stdio.h>
// int main()
//  {
//     int a[10],n,temp;
//     printf("enter the total no");
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
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     printf("sorted element :\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",a[i]);

//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,temp;
//     printf("enter the total number");
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
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     printf("sorted elements are \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
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
//     int a[10],n,swap;
//     printf("enter the  total no.");
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
//     printf("sorted elements are : \n");
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
//     printf("enter the total no.");
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
//     printf("sorted elements are: \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;

// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,temp,i,j;
//     printf("enter the no.");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<n;i++)
//     {
//         temp=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>temp)
//         {
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;


//     }
//     printf("sorted elements are :");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
// return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int a[10],n,temp,i,j;
//     printf("enter hte total number : ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<n;i++)
//     {
//         temp=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>temp)
//         {
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;


// }
// #include<stdio.h>
// int main()
// {
//     int a[10],n,temp,i,j;
//     printf("enter the total no : ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<n;i++)
//     {
//         temp=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>temp)
//         {
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     printf("sorted elements are : ");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };
// void linkedlisttraverse(struct node * ptr)
// {
//     while(ptr !=NULL)
//     {
//         printf("element : %d",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main()
// {
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node ));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next= NULL;
//     linkedlisttraverse(head);
//     return 0;


// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };
// void traverselinkedlist(struct node * ptr)
// {
//     while(ptr!=NULL)
//     {
//         printf("element %d \n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main()
// {
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=NULL;
//     traverselinkedlist(head);

// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };
// struct node * head;
// void push()
// {
//     int value;
//     struct node * newnode=(struct node *)malloc(sizeof(struct node));
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
//         printf("stack is empty");
//     }
//     else
//     {
//        printf("deleted element %d \n",head->data);
//        temp=head;
//        head=head->link;
//        free(temp);
//     }
// }
// void display()
// {
//     struct node * temp;
//     temp=head;
//     if(head==NULL)
//     {
//         printf("stack is empty");
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
//         printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit\n");
//         printf("enter the choice");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case  1:
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
//             display();
//             break;
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
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };
// void traverselinkedlist(struct node * ptr)
// { 
//     while(ptr !=NULL)
//     {
//         printf("element %d \n :",ptr->data);
//         ptr=ptr->next;
    
//     }

// }
// int main()
// {
//     struct node * head;
//     struct node * second;
//     struct node * third;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=NULL;
//     traverselinkedlist(head);

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
//     struct node * newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data=value;
//     newnode->link=head;
//     head=newnode;
// }
// void pop()
// {
//     struct node * temp;
//     if(head==NULL)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         printf("deleted element % d",head->data);
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
//         printf("stack is empty");
//     }
//     else
//     {
//         while(temp !=NULL)
//         {
//             printf("element : %d\n",temp->data);
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
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node*link;
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
//         printf("stack is empty");
//     }
//     else
//     {
//         printf("deleted element %d \n",head->data);
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
//         printf("empty");
//     }
//     else
//     {
//         while(temp!=NULL)
//         {
//             printf("element : %d\n",temp->data);
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
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * link;
// };
// struct node *front,*rear;
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
//         printf("empty");
//     }
//     else
//     {
//         printf("deleted element  : %d \n",front->data);
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
//         printf("empty");
//     }
//     else
//     {
//         while(temp!=NULL)
//         {
//             printf("elemet : %d \n",temp->data);
//             temp=temp->link;
//         }
//     }
// }
// int main()
// {
//     int choice;
//     while(1)
//     {
//         printf("\n\t1.insert\n\t2.delelte\n\t3.display\n\t4/exit\n\t");
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
//                 exit(0);
//                 break;
//             }
//             default:
//             {
//                 printf("invalid option");
//             }
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
    // int a[10],n,i=0,item;
    // printf("enter the total value");
    // scanf("%d",&n);
    // for(int j=0;j<n;j++)
    // {
    //     scanf("%d",&a[j]);
    // }
    // printf("searching item are :");
    // scanf("%d",&item);
    // while(i<n)
    // {
        // if(a[i]==item)
        // {
            // printf("item location %d ",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=n)
//     {
//         printf("item not found");
//     }
// #include <stdio.h>

// void shellSort(int arr[], int n) {
//     for (int gap = n / 2; gap > 0; gap /= 2) {
//         for (int i = gap; i < n; i++) {
//             int temp = arr[i];
//             int j;

//             for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
//                 arr[j] = arr[j - gap];
//             }

//             arr[j] = temp;
//         }
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {12, 34, 54, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     shellSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }
