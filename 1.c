#include<stdio.h>
int main()
{
  struct outer 
{
  int no;
  float f;
 struct inner 
{
  int i;
 int j;
}fobj1,iobj2;
int k;
}oobj;
fobj1.f=22.11;
iobj2.i=55;
iobj.fobj1.i=11.33;
iobj.iobj2.j=44;
return 0;
}