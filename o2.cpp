#include<iostream>
using namespace std;
class demo
{
public:
int x;
public:
void fun();
demo()
{
x=0;
}
demo(int a)
{
x=a;
}
};
 void demo ::fun()
{
cout<<"fun called\n";
}
int main()
{
demo obj;
cout<<obj.x<<"\n";
obj.fun();
//cout<<obj.fun<<"\n";
return 0;
}


 

