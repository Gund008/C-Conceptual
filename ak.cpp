#include "iostream"
using namespace std;
class demo
{
private:
int x;
static int y;
void fun()
{
 x=0;
}
void fun(int y)
{
x=60;
}
};
int demo::y=50;
int main()
{ 
demo obj;
cout<<obj.x<<"\n";
cout<<demo::y<<"\n";
cout<<sizeof(demo)<<"\n";

return 0;
}