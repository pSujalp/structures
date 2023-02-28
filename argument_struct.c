#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct fun
{
  int data;
  float f;
  char name[20];
}employee;

int func(struct fun employee) 
{
    printf("emplyee name is %s: \n",employee.name);
    printf("salary is %f: \n",employee.f);
    printf("employee no %d is \n",employee.data);
}

int main()
{
    struct fun employee1;
    printf("enter the name of the employee:\n");
    scanf("%s",&employee1.name);
    printf("enter the salary of the employee:\n");
    scanf("%f",&employee1.f);
    printf("enter the employee .no of the person:\n");
    scanf("%d",&employee1.data);

    func(employee1);
}