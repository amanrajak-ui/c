#include<stdio.h>
int a[10],n,choice,value,top;
void push()
{
    if(top>=n-1)
    {
        printf("\n\t overflow");
    }
    else
    {
        printf("enter value to be pushed :");
        scanf("%d",&value);
        top++;
        a[top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n\t underflow");
    }
    else
    {
        printf("\n\t poped element is %d",a[top]);
        top--;

    }
}
void display()
{
    if(top==-1)
    {
        printf("\n\t underflow");

    }
    else
    {
        printf("\n\t stack elements are :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
        printf("\n\t enter next choce :");
    }
}
int main()
{
    top=-1;
    printf("enter elements you want to insert :");
    scanf("%d",&n);
    printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
    do
    {
        printf("\n enter the choice \n\t");
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
                printf("\n\t exit point");
                // exit(0);
                break;
            }
            default:
            {
                printf("\n\t plz enter valid choice");
            }
        }

        
    } while (choice!=4);
    return 0;
    
    
}
