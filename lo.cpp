#include<iostream>
using namespace std;
class demo
{
 public:
 int i;
 int j;
public:
demo(int a=10,int b=0)
{
i=a;
j=b;
}
void fun()
{
 cout<<"inside fun\n";
}
void gun()
{
 cout<<"inside gun\n";
}

};

int main()
{
demo obj1;
obj1.fun();
obj1.gun();
demo obj2();
cout<<obj1.i<<"\n";
cout<<obj1.j<<"\n";
return 0;
}