#include<stdio.h >
void fun(int I)
{
auto int i;
auto int j=10;
int k=30;
printf("scope of auto variable starts from here in function fun\n");
printf("\ndefault value of uninitailised auto variable is %d,i");
printf("\nscope of auto variable ends here in function fun\n");
}
int main()
{
fun(10);
return 0;
}