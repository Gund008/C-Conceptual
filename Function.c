#include<stdio.h>

int Addtion(int,int);  //declaration

//Ghar
////////////////////////////////
int main()
{
    int A=10;
    int B=20;
    int ret=0;

    ret=Addtion(A,B);  //declarion
    printf("%d\n",ret); 
    return 0;
}
////////////////////////////////////////
//defination(DUKAN)
int Addtion(int no1,int no2)
{
   int Ans=0;
   Ans=no1+no2;
   return Ans;
}