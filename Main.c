#include<stdio.h>
#include "Marvellous.h"

//os call
int main()
{
    struct Demo obj;

    printf("Inside main:\n");
    printf("Value of macro is:%d\n",MAX); //101
    printf("Size of structure is:%d\n",sizeof(obj)); //12

    fun();

    return 0;

}
void fun()
{
    printf("Inside fun:\n");
}