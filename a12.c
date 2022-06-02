#include<stdio.h>
int main()
{
int no=10;
int *p=NULL;
p=&no;
printf("%d\n",no);
printf("%d\n",*p);
*p=11;
printf("%d\n",no);
printf("%d\n",*p);
return 0;

}