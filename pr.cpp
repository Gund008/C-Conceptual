#include<iostream>
using namespace std;
class base
{
public:
int x,y;
base()
{
cout<<"inside base constructor\n";
}
~base()
{
cout<< "inside base destructor\n";
}
void fun()
{
 cout<<"base fun\n";
}
};
class derived:public base
{
public:
int i,j;
derived()
{
cout<<"inside derived constructor\n";
}
~derived()
{
cout<< "inside derived destructor\n";
}
void gun()
{
 cout<<"derived gun\n";
}
};
int main()
{
derived dobj;
dobj.gun();
dobj.fun();
return 0;
}