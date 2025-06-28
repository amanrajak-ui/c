#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * link;
};
struct node *rear=NULL,*front=NULL;
void enqueue()
{
    int value;
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&value);
    newnode->data=value;
    newnode->link=NULL;
    if(front==NULL && rear==NULL)
    {
        front = rear=newnode;
    }
    else
    {
        rear->link=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node * temp;
    if(front==NULL)
    {
        printf("empty");
    }
    else
    {
        printf("deleted element %d",front->data);
        temp=front;
        front=front->link;
        free(temp);
    }
}
void display()
{
    struct node * temp;
    temp=front;
    if(front==NULL)
    {
        printf("empty");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.e\n");
        printf("\n2.d\n");
        printf("\n3.s\n");
        printf("\n4.exit\n");
        
        printf("enter choice");
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
                exit(0);
                break;
            }
            default:
            {
                printf("\n enter valid option");
            }
        }
        
    }
    return 0;
}

