#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct CN
{ int postive_part;
  int imaginary_part;
  int pos_1;
  int img_1;
}c,complex;

int main()
{
 
    struct CN *ptr=&c;
    int i,j,k,l;
    printf("Enter the Real number part and Imaginary part of 1st complex number:\n");
    scanf("%d %d",&ptr->postive_part,&ptr->imaginary_part);
    printf("Enter the Real number part and Imaginary part of 2nd complex number:\n");
    scanf("%d %d",&ptr->pos_1,&ptr->img_1);
    printf("The sum of two complex number is:\n");
    printf("[%d + i( %d )]",(ptr->postive_part+ptr->pos_1),(ptr->imaginary_part+ptr->img_1));}
