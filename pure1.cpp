#include<iostream>
using namespace std;
class base
{
public:
int x,y;
void fun()
{
cout<<"base fun\n";
}
virtual void gun()
{
cout<<"base gun\n";
}
virtual void sun()
{
cout<<"base sun\n";
}
virtual void run()=0;
};
class derived:public base
{
public:
int i,j;
void fun()
{
cout<<"derived fun\n";
}
 virtual void gun()
{
cout<<"derived gun\n";
}
void run()
{
cout<<"derived run\n";
}
};
int main()
{
derived dobj;
base *bp=NULL;
bp=&dobj;
cout<<sizeof(base)<<"\n";
cout<<sizeof(derived)<<"\n";
bp->fun();
bp->gun();
bp->sun();
bp->run();

return 0;
}