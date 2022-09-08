#include<stdio.h>


struct outer  //nested structure decl
{
    float f;
    int i;
    struct inner
   {
    int x;
    int y;
   };
};


union Demo  //union decl
{
    int no;
    char *ch;
    double d;
};

/////////////////////////////////////////
int main()
{
    int no=3;
    int *p=&no;

    printf("%d\n",sizeof(no));  //4
    printf("%d\n",sizeof(p));  //4

    return 0;

}


int Arr[0][0]

*(*(Arr+0)+0)

Arr[2]

*(Arr+2)