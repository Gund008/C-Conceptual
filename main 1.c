#include<stdio.h>
 
int i=10;  //global variable defination

extern int j;  //variable  declration

extern void no;

int main()
{
    printf("Inside main\n");

    printf("Value of i is:%d\n",i);
    printf("value of j is:%d\n",j);
    printf("%d",no);
    fun();

    return 0;

}