#include<stdio.h>
int main()
{
int no=11;
char ch='A';
printf("%d",no);
printf("value of ch:%c\n",ch);
printf("address of no is:%u\n",&no);
printf("address of ch is:%u\n",&ch);
printf("size of no is:%d\n",sizeof(no));
printf("size of ch is:%d\n",sizeof(ch));
return 0;
}
