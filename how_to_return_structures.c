#include<stdio.h>

struct candit
{
char name[20];
int age;
};

struct candit getinfo()
{
    struct candit s1;
    printf("Enter the name:\n");
    scanf("%s",&s1.name);
    printf("Enter the age:\n");
    scanf("%d",&s1.age);

    return s1;
}

int main()
{
    struct candit s;
    s=getinfo();
    printf("Name :%s \n",s.name);
    printf("Age: %d",s.age);

}