#include<stdio.h>

//multiple condition used if else  

int main()
{
    auto int iAge=0;

    printf("Enter your marks\n");
    scanf("%d",&iAge);    //user defined function

    if(iAge>=0)&&(iAge<=10)
    {
        printf("Your ticket amount is:100\n");
    }
    else if((iAge>10)&&(iAge<=40))
    {
        printf("Your ticket amount is:500\n");
    }
    else if(iAge>40)
    {
        printf("Your ticket amount is:300");
    }
    return 0;
}