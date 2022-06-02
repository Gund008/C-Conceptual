#include<iostream>
using namespace std;
class base
{
private:
int x;
protected:
int y;
};
class derived:public base
{
int a,b;
void change()
{

b=y;
}
};
int main()
{
derived dobj;
base bobj;
//dobj.change();
cout<<bobj<<"\n";
cout<<dobj<<"\n";
return 0;
}
