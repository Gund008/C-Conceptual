#include<stdio.h>
int main()
{
    int val=0;
    int key=0;
    printf("enter two no\t");
    scanf("%d%d",&val,&key);
    val=val^key;
    printf("after negating bits, result is %d",val);

    return 0;

}