#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct str
{
    int data,data1,data2,data3,data4;
}data,dt;

struct str func()
{
    struct str *dt;
    
    dt->data1=5;
    
    return *dt;

}
int main()
{
    struct str l;
    l=func();
    printf("%d",l.data1);

}