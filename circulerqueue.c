#include<stdio.h>
#define size 5
int a[size],choice,front=-1,rear=-1;
void enqueue()
{
    int value;
    if((rear+1)% size==front)
    {
        printf("\n overflow");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&value);
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else
        {
            rear=(rear +1)%size;
        }
        a[rear]=value;
    }
}
void dequeue()
{
    int item;
    if(front==-1)
    {
        printf("\n underflow");
    }
    else
    {
        item=a[front];
        printf("\n delete item %d",item);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }

    }
}
void display()
{
    int i=front;
    
    if(front==-1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("\n queue elements");
        while(i<=rear)
        {
            printf("%d \t",a[i]);
            i=(i+1)% size;
        }
    
    }
}
int main()
{
    printf("\n1.insert \n2.delete \n3.display \n4.exit");
    do
    {
        printf("\n enter the choice");
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
                printf("\n exit point");
                break;
            }
            default:
            {
                printf("\n enter valid choice");
            }
        }
    }
    while(choice !=4);
    return 0;


}