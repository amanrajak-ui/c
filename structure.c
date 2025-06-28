// #include<stdio.h>
// #include<string.h>
// struct student 
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main()
// {
//    struct student s1;
//    strcpy(s1.name,"aman");
//    s1.roll=53;
//    s1.cgpa=9.0;
//    printf("student name %s \n",s1.name);
//    printf("student roll %d \n",s1.roll);
//    printf("student cgpa %f \n",s1.cgpa);
//    return 0;
   
// }
// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     char name[100];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct student s1,s2,s3;
//     strcpy(s1.name,"aman");
//      s1.roll=10;
//     s1.marks=86.5;
//     printf("student name %s \n",s1.name);
//     printf("student roll %d \n",s1.roll);
//     printf("student marks %f \n",s1.marks);
//     printf("\n");
//     strcpy(s2.name,"rajak");
//     s2.roll=12;
//     s2.marks=80.5;
//     printf("student name %s \n",s1.name);
//     printf("student roll %d \n ",s2.roll);
//     printf("student marks %f \n ",s2.marks);
//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// struct class
// {
//     char name[100];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct class s1={"ram",21,99.9};
//     printf("student name %s \n",s1.name);
//     printf("student roll \n",s1.roll);
//     printf("student marks %f \n",s1.marks);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 ={"aman",28,95.6};
    printf("name %s\n",s1.name);
    printf("roll %d \n",s1.roll);
    printf("cgpa %f \n",s1.cgpa);
    struct student *ptr=&s1;
    printf("student roll %d \n",(*ptr).roll);
    printf("name %s \n",ptr->name);
    printf("roll %d \n",ptr->roll);
    printf("cgpa %f \n",ptr->cgpa);

    return 0;
}