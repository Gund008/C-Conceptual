#include<iostream>
using namespace std;

class base
{
public :
 int i;
float f;

void fun()
{
cout<<"inside base run";
}
 virtual void gun()
{
cout<<"inside base gun";
}
};
                                                                                                             

class derived :public base
{
public:
int i;
double d;

 virtual void fun()
{
 cout<<"inside  derived fun\n";
}
void gun()
{
 cout<<"inside derived gun\n";
}
virtual void sun()
{
 cout<<"inside derived mun";
}
};

int main()
{ 
derived dobj;                                                                                                                                                               
base *bp=NULL;
bp=&dobj;
bp->gun();//derived
bp->fun();//base
bp->sun();


return 0;
}

