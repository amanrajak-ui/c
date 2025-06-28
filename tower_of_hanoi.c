#include<stdio.h>
void toh(int n,char beg,char temp,char end)                                                                               
{
    if(n>=1)
    {
        toh(n-1,beg,end,temp);
        printf("%d %c to %c \n",n,beg,end);
        toh(n-1,temp,beg,end);
    }
}
int main()
{
    int n=3;
    toh(n,'A','B','C');
    return 0;
}