#include<stdio.h>
int main()
{
struct demo
{
  int arr[3];
  float brr[2];
};
 struct demo obj;
 obj.arr[0]=11;
 obj.arr[1]=33;
 obj.arr[2]=44;
 obj.brr[0]=12.44;
 obj.brr[1]=10.11;

printf("%d\n%d\n%d\n%f\n%f\n", obj.arr[0], obj.arr[1],obj.arr[2],obj.brr[0],obj.brr[1]c );
return 0;
}