#include<iostream>
using namespace std;
class demo
{
public:
int x;
private:
int y;
protected:
int z;
};
 class derived:public demo
{
 public:
int i;
private:
int j;
protected:
int k;
};
void gun()
{
 cout<<"inside gun<<\n";
}
int main()
{
cout<<sizeof(demo)<<"\n";
cout<<sizeof(derived)<<"\n";
demo dobj;
cout<<dobj.x<<"\n";
derived hobj;
cout<<hobj.i<<"\n";
demo dobj;
cout<<dobj.z<<"\n";
//cout<<obj.k<<"\n";
obj.gun()
return 0;
}
