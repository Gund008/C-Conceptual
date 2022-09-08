#include "Marvellous.h"

#define NULL(void*) 0
#define ROI 5.5

int main()
{
    int *p=NULL; //.c

    int *p=(void*)0 //.i Macro replacement

    return 0;

}


#define SIZE 10

int Arr[SIZE];

int Arr[10];

int no=11;

int Brr[no];

int i=0;
printf("%d",Arr[i]);
