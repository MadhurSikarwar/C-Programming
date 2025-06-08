//write a program to read details of 10 employees and print the same
#include<stdio.h>
// array of structures to be used in this program
struct employee
{
    char name[20];
    int emp_id;
    int salary;
};

int main(){
    struct employee s[10];
    // taking input
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name of employee %d:\n ",(i+1));
        scanf("%s",&s[i].name);
        printf("Enter employee id of employee %d:\n ",(i+1));
        scanf("%s",&s[i].emp_id);
        printf("Enter salary of employee %d:\n ",(i+1));
        scanf("%s",&s[i].salary);
    }
    //printing the details of the employee
    for (int i = 0; i < 2; i++)
    {
        printf("Name of employee %d :%s",(i+1),s[i].name);
        printf("Employee id of employee %d :%d",(i+1),s[i].emp_id);
        printf("Salary of employee %d :%d",(i+1),s[i].salary);
    }
    
}
