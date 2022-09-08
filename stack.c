#include<stdio.h>

/*
function name:Addtion
Input:Two integer
Output:Integer
Description:It is used to perform addtion
Author:piyush Mnohar Khairnar
Date:
*/

///////////////////////////////////////////////////
int Addtion(int ino1,int ino2)
{
    auto int ians=0;
    ians=ino1+ino2;
    return ians;
}
/////////////////////////////////////////////////////
//entry point function of Addtion application

int main()
{
    auto int ivalue1=0,ivalue2=0;
    auto int iret=0;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter the second number:\n");
    scanf("%d\n",ivalue2);

    iret=Addtion(ivalue1,ivalue2); //declration


    return 0;

}