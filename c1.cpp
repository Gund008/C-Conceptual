#include<iostream>
using namespace std;
class hello
{
public:
int i;
int j;
demo()
{
cout<<"inside default constructor\n";
}
hello(int x,int y)
{
x=i;
y=j;
}
~hello()
{
cout<<"inside destructor\n";
}
};
hello(hello &ref)
{
cout<<"inside copy constructor\n";
}
int main()
{
hello obj1(11,21);
hello obj2(51,61);
cout<<sizeof(obj1)<<"\n";
cout<<sizeof(obj2)<<"\n";
return 0;
}