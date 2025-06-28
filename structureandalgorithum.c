#include<stdio.h>
int arr[10],choice,n,top,x,i;
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        arr[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",arr[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
         printf("\n The STACK is empty");  
     
    }
    else
    {
       
           printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        {
            printf("\n%d",arr[i]);
        }
        printf("\n Press Next Choice");
    }
   
}


int main()
{
    top=-1;
    printf("\n Enter the size of arr[MAX=10]:");
    scanf("%d",&n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
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
                printf("\n EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid choice");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
