#include<stdio.h>

int main()
{

    char cValue='M';
    char *cPtr=&cValue;

    int iValue=21;
    int *fPtr=&fValue;

    float fValue=10.11f;
    float *fPtr=&fValue;
    
    double dValue=20.11;
    double *dPtr=&dValue;

    printf("%c\n",*cPtr);  //M
    printf("%d\n",&cValue); //21
    printf("%d\n",cPtr);
    printf("%d\n",sizeof(cValue));
    printf("%d\n",sizeof(cPtr));
    printf("%d\n",sizeof(*cPtr));




    /*
    iValue=21
    cValue=M
    dValue =20.11
    fvalue=10.11
    &ivalue=200
    &dvalue=400
    &dvalue=300
    &fptr=700
    &iptr=600
    *dptr=20.11
    *iptr=21
    *cptr=M
    fptr=10.11
    */
    

    return 0;


}