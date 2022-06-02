#include<stdio.h>
int main()
{
struct hello
{
int i;
struct hello *ptr;
};
struct hello obj1,obj2,obj3;
obj1.i=11.3;
obj2.i=11;
obj3.i=55;
obj1.ptr=&obj2;
obj2.ptr=&obj3;
obj3.ptr=0;
printf("%d\n",obj1.ptr->i);
return 0;
}