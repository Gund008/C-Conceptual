#include<stdio.h>

void Demo()
{
    auto int i=11;
    register int j=21;
}

int main()
{
    Demo();
    return 0;

}

//register storage class
//Memory:CPU register
//Default value:Garbage
//Scope:Local(Throughout the function)
//lifetime:Local (Throughout the function)
