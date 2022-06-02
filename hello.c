#include<stdio.h>
int main()
{
struct demo
{
int i;
float f;
double d;
};
struct  hello
{
    int arr[3];
    float f;
    double d;

};
struct demo obj1;
struct hello obj2;
obj1.i=12;
obj1.f=1.1;
obj1.d=1.20;
obj2.arr[0]=2;
obj2.arr[1]=3;
obj2.arr[2]=4;
obj2.f=3.3;
obj2.d=22.2;
printf("%d\n%f\n%d\n",obj1.i,obj1.f,obj1.d);
printf("%d\n%f\n%d\n",obj2.arr[0],obj2.arr[1],obj2.arr[3]);

return 0;
}