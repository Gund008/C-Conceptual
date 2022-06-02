#include<iostream>
using namespace std;
class base
{
public:
int x,y;
base()
{
 cout<<"inside base constructor<<\n";
}
~base()
{
 cout<<"inside base destructor<<\n";
}
void fun()
{
 cout<<"inside base fun<<\n";
}
};
class derived:public base
{
public:
int i,j;
{
cout<<"inside derived constuctor<<\n";
}
~derived()
{
cout<<"inside derived destructor<<\n";
}
void gun()
{
 cout<<"inside derived fun<<\n";
}
};
int main()
{
derived dobj;
//dobj.fun()
//dobj.gun()
{
cout<<sizeof(base)<<"\n";
cout<<sizeof(derived)<<"\n";
return 0;
}
}
