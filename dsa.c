// #include<stdio.h>
// void push(int a[],int top,int size)
// {
//     if(top==size-1)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         top++;
//         printf("enter the elements \n");
//         scanf("%d",&a[top]);
//     }
// }
// int main()
// {

// }
// #include<stdio.h>
// void pop(int a[],int top)
// {
//     if(top==-1)
//     {
//         printf("empty");
//     }
//     else
//     {
//         printf("deleted element is \t");
//         printf("%d",a[top]);
//         top--;
//     }
// }
// int main()
// {

// }
// #include <stdio.h>
// void traverse(int a[], int top)
// {
//     if (top == -1)
//     {
//         printf("empty");
//     }
//     else
//     {
//         for (int i = top; i>=0;i--)
//         {
//             printf("%d\n",a[i]);
//         }
//     }
// }

// int main()
// {
// }


// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},i=0,item;
//     printf("input searching item \n");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item found location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},i=0,item;
//     printf("enter searching element \n ");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("element location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],i=0,item;
//     printf("enter array elements \n");
//     for(int j=0;j<5;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter searching item");
//     scanf("%d",&item);
//     while (i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("element location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("element not found");
//     }
//     return 0;

// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},lr=0,up=4,f=0,mid,item;
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
//            { lr=mid+1;}
//         else{
//            up=mid-1;}
//     }
//     if(f==1)
//     {printf("item found with location %d",mid);}
    
//     else
//        { printf("not found");}
// }
// #include<stdio.h>
// // #include<stdlib.h>
// int main()
// {
//     int a[5];
//     printf("enter element \n");
//     for(int i=0;i<5;i++)
//     {

//         scanf("%d",&a[i]);
//     }
//     printf("array");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \n",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50};
//     a[4]=60;
//     printf("enter element \n");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \n",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,temp,n;
//     printf("enter length of data : ");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter %d element",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(j=0;j<n;j++)
//     {
//         printf("%d ",a[j]);
//     }
//     return 0;
// }
// #include <stdio.h>

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements of arr[0..i-1], that are greater than key,
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
// #include<stdio.h>
// void insertion_sort(int a[], int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key=a[i];
//         j=i-1;
//         while(j>=0 && a[j] > key)
//         {
//             a[j+1]=a[j];
//             j=j-1;
//         }
//         a[j+1]=key;

//     }
// }
// int main()
// {
//     int i;
//     int a[]={6,2,1,3,5};
//     int n=5;
//     insertion_sort(a,n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d \n",a[i]);
    
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={1,2,3,4,5};
    
//     for(int i=0;i<5;i++)
//     {
//         printf("%d \t",a[i]);
        
        
//     }
    
    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     int i,j,temp,n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("a[%d]=\t",i);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("selection sort\n");
//    for(i=0;i<n;i++)
//    {
//     printf("a[%d]=\t%d\n",i,a[i]);
//     // printf("a[%d] %d",i,a[i]);
//    }

// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},i=0,item;
//     printf("enter search item");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
//     return 0;
    
// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={11,22,33,44,55},i=0,item;
//     printf("enter search item");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
//     return 0;

// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},i=0,item;
//     printf("enter serach item ");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;

//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }

// }
// #include<stdio.h>
// int main()
// {
//     int a[5],i=0,item;
//     printf("enter item\n");
//     for(int j=0;j<5;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter search item");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],i=0,item;
//     printf("enter element in array\n");
//     for(int j=0;j<5;j++)
//     {
//         scanf("%d",&a[j]);
//     }
//     printf("enter serach item");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item location %d",i);
//             break;
//         }
//         i++;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},f=0,item,lr=0,up=4,mid;
//     printf("enter search item");
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
//         if(f==1)
//         {
//             printf("item location %d",mid);
//         }
    
//         else
//         {
//             printf("item not found");
//         }
    
//     return 0;

// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,temp;
//     printf("enter the number");
//     scanf("%d",&n);
//     printf("array element\n");
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
//     printf("sorted element\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[5],n,swap;
//     printf("enter total number");
//     scanf("%d",&n);
//     printf("array element\n");
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
//     }
//     printf("sorted element\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \t",a[i]);
//     }
//     return 0;
// }
// #include <stdio.h>   
// int stack[100],i,j,choice=0,n,top=-1;  
// void push();  
// void pop();  
// void show();  
// void main ()  
// {  
//     
//     printf("Enter the number of elements in the stack ");   
//     scanf("%d",&n);  
//     printf("*********Stack operations using array*********");  
// 
// printf("\n----------------------------------------------\n");  
//     while(choice != 4)  
//     {  
//         printf("Chose one from the below options...\n");  
//         printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
//         printf("\n Enter your choice \n");        
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
//                 show();  
//                 break;  
//             }  
//             case 4:   
//             {  
//                 printf("Exiting....");  
//                 break;   
//             }  
//             default:  
//             {  
//                 printf("Please Enter valid choice ");  
//             }   
//         };  
//     }  
// }   
  
// void push ()  
// {  
//     int val;      
//     if (top == n )   
//     printf("\n Overflow");   
//     else   
//     {  
//         printf("Enter the value?");  
//         scanf("%d",&val);         
//         top = top +1;   
//         stack[top] = val;   
//     }   
// }   
  
// void pop ()   
// {   
//     if(top == -1)   
//     printf("Underflow");  
//     else  
//     top = top -1;   
// }   
// void show()  
// {  
//     for (i=top;i>=0;i--)  
//     {  
//         printf("%d\n",stack[i]);  
//     }  
//     if(top == -1)   
//     {  
//         printf("Stack is empty");  
//     }  
// } 
#include<stdio.h>
int stack[100], choice, n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        i++;
        printf("\n Enter Choice %d:", i);
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
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(i<n);

    display();

    return 0;
}
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
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }


}
