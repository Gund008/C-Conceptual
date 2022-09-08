#include<stdio.h>

int main()
{
    int no1=10;
    int no2=10;
    int ans1=0;
    int ans2=0;
     
     /*
    ans=no1++ post
    ans=++no1 pre
    no1++ increment
    ptr++ pointer airthematic
    */
    ans1=no1++;  //postincrement
    printf("Value of ans1 %d\n",ans1); //post 10
    printf("Value of no1 %d\n",no1);  //increment 11
    
    ans2=++no2;  //preincrement
    printf("Value of ans2 %d\n",ans2); //pre 11
    printf ("Value of no2 %d\n",no2); //increment 11

    return 0;
    
}