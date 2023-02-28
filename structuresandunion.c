#include<stdio.h>

struct struct_1
{
    int data;
    float f;
    char name[20];
}s,s1;

union union_1
{
    int data;
    float f;
    char name[20];

}u,u1;

int main()
{
   printf("Enter the value of structures :\n \n enter the value for integer data\n");
   scanf("%d",&s.data);
   printf("Enter value for float member\n");
   scanf("%f",&s.f);
   printf("enter the value of a string:\n");
   scanf("%s",&s.name);
   printf("\n\n");
   printf("The values of structures are :\n");
   printf("integer data value %d\n",s.data);
   printf("flaot data value %f\n ",s.f);
   printf("string data value %s \n ",s.name);

    printf("\n\n");
   
   printf("Enter the value of union :\n \n enter the value for integer data\n");
   scanf("%d",&u.data);
   printf("integer data value %d \n",u.data);
   printf("Enter value for float member\n");
   scanf("%f",&u.f);
   printf("flaot data value %f \n",u.f);
   printf("enter the value of a string:\n");
   scanf("%s",&u.name);
   printf("string data value %s \n ",u.name);
   printf("\n\n");

  
   return 0;
   
   
   



}