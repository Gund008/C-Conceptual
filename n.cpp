#include<iostream>
using namespace std;
class a
{
public:
int x;
void fun();
};
void a::fun()
{
cout<<"fun() caller\n";
}
int main()
{ 
a obj;
//cout<<obj.a<<"\n";
obj.fun();
//cout<<obj::fun<<"\n";
return 0;
}