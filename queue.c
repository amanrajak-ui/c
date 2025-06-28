
#include<stdio.h>
int a[10],n,choice,front=-1,rear=-1,i;

void enqueue()
{
     if(rear==n-1)
     {
        printf("\n Queue is Full");

     }
    else
        {
             printf("\n Enter pushed element:");
                scanf("%d",&a[rear++]);
        }

}
void dequeue()
{
      if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",a[front++]);
            
            }
}
void display()
{
  printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",a[i]);
                    printf("\n");
                }
            }
}
int main()
{
    printf("enter the number");
    scanf("%d",&n);
    
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    do
    {
        printf("\nEnter the Choice:");
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
                printf("exit point\n\t");
                break;
            }
            default:
                printf("Wrong Choice: please see the options");
         }
     }
     while(choice !=4);
     return 0;

 }

