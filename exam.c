// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };
// void linkedlist(struct node * ptr)
// {
//     while(ptr !=NULL)
//     {
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main()
// {
//     struct node *head;
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
//     linkedlist(head);


// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node * next;
// };
// void traverse(struct node * ptr)
// {

    
//     while(ptr != NULL)
//     {
//         printf("data : %d\n",ptr->data);
//         ptr=ptr->next;
//     }
    
// }
// int main()
// {
//     struct node * head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     fourth=(struct node *)malloc(sizeof(struct node));
//     head->data=10;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=30;
//     third->next=fourth;
//     fourth->data=40;
//     fourth->next=NULL;
//     traverse(head);
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int info;
//     struct node * link;
// };
// struct node * start =NULL;
// void create()
// {
//     if(start==NULL)
//     {
//         int n;
//         printf("\n enter the number of nodes");
//         scanf("%d",&n);
//         if(n!=0)
//         {
//             int data;
//             struct node * newnode;
//             struct node * temp;
//             newnode=(struct node*)malloc(sizeof(struct node));
//             start=temp=newnode;
//             printf("\n enter the number to be inserted");
//             scanf("%d",&data);
//             start->info=data;
//             for(int i =2;i<=n;i++)
//             {
//                 newnode=(struct node *)malloc(sizeof(struct node));
//                 temp->link=newnode;
//                 printf("\n enter the no. to be inserted");
//                 scanf("%d",&data);
//                 newnode->info=data;
//                 temp=temp->link;
//                 newnode->link=NULL;


//             }
//         }
//     }
//     else
//     {
//         printf("list is created");
//     }

// }
// void traverse()
// {
//     struct node * temp;
//     if(start==NULL)
//     {
//         printf("\n empty");
//     }
//     else
//     {
//         temp=start;
//         while(temp !=NULL)
//         {
//             printf("%d \n",temp->info);
//             temp=temp->link;
//         }


//     }
// }
// struct node
// {
//     int info;
//     struct node *link;
// };
// struct node *start=NULL;
// void create()
// {
//     if(start==NULL)
//     {
//         int n;
//         printf("enter the no. of nodes");
//         scanf("%d",&n);
//         if(n !=0)
//         {
//             int data;
//             struct node * newnode;
//             struct node * temp;
//             newnode = (struct node *)malloc(sizeof(struct node));
//             start=temp=newnode;
//             printf("enter the no. to insert");
//             scanf("%d",&data);
//             start->info=data;
//             for(int i=2;i<=n;i++)
//             {
//                 newnode=(struct node*)malloc(sizeof(struct node));
//                 temp->link=newnode;
//                 printf("enter the no. to insert");
//                 scanf("%d",&data);
//                 newnode->info=data;
//                 temp=temp->link;
//                 newnode->link=NULL;
//             }

//         }

//     }
//     else
//     {
//         printf("\n linked list is created");
//     }
// }
// void traverse()
// {
//     struct node *temp;
//     if(start==NULL)
//     {
//         printf("\n empty");
//     }
//     else
//     {
//         temp=start;
//         while(temp !=NULL)
//         {
//             printf("%d \t",temp->info);
//             temp=temp->link;
//         }
//     }
// }
/*struct node
{
    int info;
    struct node * link;
};
struct node * start=NULL;
void create()
{
    if(start ==NULL)
    {
        int n;
        printf("enter the no. of node");
        scanf("%d",&n);
        if(n!=0)
        {
            int data;
            struct node * newnode;
            struct node * temp;
            newnode=(struct node*)malloc(sizeof(struct node));
            start=temp=newnode;
            printf("enter no. to insert");
            scanf("%d",&data);
            start->info=data;
            for(int i=2;i<=n;i++)
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                temp->link=newnode;
                printf("enter no. to insert");
                scanf("%d",&data);
                newnode->info=data;
                temp=temp->link;
                newnode->link=NULL;
            }
        }
    
    }
    else
    {
        printf("\n list is created");
    }
}
void traverse()
{
    struct node * temp;
    if(start==NULL)
    {
        printf("\n empty");
    }
    else
    {
        temp=start;
        while(temp != NULL)
        {
            printf("%d \t",temp->info);
            temp=temp->link;
        }
        
    }
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void traverse(struct node * ptr)

{
    while(ptr !=NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    traverse(head);
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * link;
};
struct node *start=NULL;
void create()
{
    if(start==NULL)
    {
        int n;
        printf("enter the no. of nodes");
        scanf("%d",&n);
        if(n !=0)
        {
            int data;
            struct node * newnode;
            struct node *temp;
            newnode=(struct node*)malloc(sizeof(struct node));
            start=temp=newnode;
            printf("enter the no. to be inserted");
            scanf("%d",&data);
            start->info=data;
            for(int i=2;i<=n;i++)
            {
                newnode=(struct node *)malloc(sizeof(struct node));
                temp->link=newnode;
                printf("enter the no. to be inserted");
                scanf("%d",&data);
                newnode->info=data;
                temp=temp->link;
                newnode->link=NULL;
            }

        }

    }
    else
    {
        printf("list is created");
    }
}
void traverse()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("\n empty");
    }
    else
    {
        temp=start;
        while(temp !=NULL)
        {
            printf("%d \t",temp->info);
            temp=temp->link;
        }
    }
}
// void insertatfront()
// {
//     struct node * temp;
//     int data;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data");
//     scanf("%d",&data);
//     temp->info=data;
//     temp->link=start;
//     start=temp;
// }
// void insertatend()
// {
//     struct node * temp,*head;
//     int data;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data");
//     scanf("%d",&data);
//     temp->info=data;
//     temp->link=NULL;
//     head=start;
//     while(head->link != NULL)
//     {
//         head=head->link;
//     }
//     head->link=temp;
// }
// void insertatend()
// {
//     struct node *temp,*head;
//     int data;
//     temp=(struct node *)malloc(sizeof(struct node));
//     printf("enter the data");
//     scanf("%d",&data);
//     temp->info=data;
//     temp->link=NULL;
//     head=start;
//     while(head->link !=NULL)
//     {
//         head=head->link;
//     }
//     head->link=temp;
// }
void insertatpos()
{
    struct node *temp,*newnode;
    int data,pos,i=1;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the nposition and no.");
    scanf("%d %d",&pos,&data);
    temp=start;
    newnode->info=data;
    newnode->link=0;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    newnode->link=temp->link;
    temp->link=newnode;


}
void delf()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("empty");
    }
    else
    {
        temp=start;
        start=start->link;
        free(temp);
    }

    
}
















































int main()
{
    int choice;
    while(1)
    {
        printf("\n create");
        printf("\n traverse");
        printf("insert at front");
        printf("\n insertatend");
        printf("\n insertat anypos");
        printf("\n");
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                create();
                break;

            }
            case 2:
            {
                insertatpos();
                break;
            }
            case 3:
            {
                traverse();
                break;
            }
            case 4:
            {
                exit(1);
                break;
            }
            default:
            {
                printf("invalid");
            }

        }
    }
    return 0;
}