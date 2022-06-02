#include<stdio.h>
int main()
{
int Arr[5]={10,20,30,40,50};
int *p=&(Arr[0]);
int *q=&(Arr[4]);
printf("number of element between and p %d\n",q-p);
printf("value of p %d\n",p);
p=p+3;
printf("value of p %d\n",p);
printf("value of q%d\n",q);
q=q-3;
printf("value of q %d\n",q);
return 0;
}
