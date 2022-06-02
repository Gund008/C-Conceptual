#include<iostream>
using namespace std;
class base
{
public:
int x;
int y;
  static virtual void fun()
{
cout<<"inside fun";
}
void gun()
{
cout<<"inside gun";
}
};

class derived: public base
{
public:
int a;
int b;
 virtual void fun()
{
cout<<"fun";
}
void sun()
{
cout<<"inside sun";
}
};
int main()
{
base *bp=new derived() ;
//dobj->fun();
dobj->sun();
cout<<obj->sun"\n";
cout<<obj.gun"\n";
dobj->gun();
return 0;
}