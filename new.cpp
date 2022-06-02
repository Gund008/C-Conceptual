#include<iostream>
using namespace std;
int main()
{
 int arr[5];
 int *p=NULL;
p=new int [5];
if(p==NULL)
{
cout<<"unable to allocates the memeory\n";
}
else
{
 cout<<"memory gets allocates successfullyat address:"<<p<<"\n";
}
delete[]p;
 return 0;
}