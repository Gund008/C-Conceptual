#include<iostream>
using namespace std;
class demo
{
public:
int i;
private:
int j;
protected:
int k;
};
class hello:protected demo
{
public:
int x;
private:
int y;
protected:
int z;
public:
hello()
{
 cout<<"inside constructor\n";
}
void fun()
{
 cout<<k<<"\n";
}
};
 int main()
{
hello hobj;
cout<<hobj.x<<"\n";
cout<<hobj.k<<"\n";
demo dobj;
cout<<dobj.i<<"\n";
hobj.fun();
cout<<sizeof(demo)<<"\n";
cout<<sizeof(hello)<<"\n";
return 0;
}