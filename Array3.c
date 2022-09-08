#include<stdio.h>

int main()
{
    int No1=10;

    const int No2=10;

    No1++;  //allow
    //No2++; not allowed

    No1=20;
    //No2=20;

    return 0;

}