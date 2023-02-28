#include<stdio.h>
#define loop(a) for(int i=1;i<=a;i++) printf("%d",i);
#define int char
int main()
{
    int i=5;
    //loop(5);
    printf("%d",sizeof(i));
    return 0;
}