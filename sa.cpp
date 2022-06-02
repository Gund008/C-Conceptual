#include<iostream>
using namespace std;
class base
{
public:
int i,j;
static int k;
base()
{
i=10;
j=20;
}
void fun()
{
cout<<"base fun\n";
}
};
int base::k=11;
class derived:public base
{
public:
int x,y;
derived()
{
x=50;
y=60;
}
void gun()
{
cout<<"derived gun\n";
}
};
int main()
{
base bobj;
derived dobj;
cout<<sizeof(bobj);        //8
cout<<sizeof(dobj);       //16
//bobj.fun();
//dobj.gun();
cout<<bobj.i;      //10
cout<<bobj.j;      //20
cout<<dobj.k;      //11
cout<<dobj.i;
cout<<dobj.k;
cout<<dobj.x;
return 0;
}