#include<stdio.h>
int main()
{
char cValue='M';
char *cPtr =&cValue;
int iValue=21;
int *iPtr=&iValue;
float fValue=10.11;
float *fPtr=&fValue;
double dValue=20.11;
double *dPtr =&dValue; 
printf("%c\n",*cPtr);
printf("%d\n",&cvalue);
printf("%d\n,cptr");
printf("%d\n",sizeof(cvalue));
printf("%d\n",sizeof(cptr));
printf("%d\n",sizeof(*cptr));

return 0;
}
