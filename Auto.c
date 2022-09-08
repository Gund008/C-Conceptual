#include<stdio.h>


void Demo() //defination
{
    printf("Inside demo:\n");
    //All the below 3 variable are local varaible
    int i=10;
    auto int j=20;
    auto int k;
    printf("%d\n",k);
}
///////////////////////////////////////
int main()
{
    int Value=51;
    printf("Inside main\n");
    Demo();   //declartion

    return 0;
}


//auto :storage class
//Memory :Stack
//Scope :Local(Throughout function)
//Lifetime:Local(Throughout function)
