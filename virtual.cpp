#include<iostream>
using namespace std;
class base
{
public:
int x,y;
virtual void fun()
{
cout<<"base fun"<<"\n";
}
 virtual void gun()
{
cout<<"base gun"<<"\n";
}
virtual void sun()
{
cout<<"base sun"<<"\n";
}
virtual void run()
{
cout<<"base run"<<"\n";
}
};
class derived:public base
{
public:
int i,j;
void fun()
{
cout<<"derived fun"<<"\n";
}
 virtual void gun()
{
cout<<"derived gun"<<"\n";
}
 void sun()
{
cout<<"derived sun"<<"\n";
}
virtual void mun()
{
cout<<"derived mun"<<"\n";
}
};
int main()
{
base *bp=new derived();
bp->fun();
bp->gun();
cout<<"sizeof base:"<<sizeof(base)<<"\n";
cout<<"sizeof derived:"<<sizeof(derived)<<"\n";
return 0;
}