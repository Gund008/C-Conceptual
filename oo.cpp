#include<iostream>
 using namespace std;

class demo
{
  public:
 int ino1;
 int ino2;
demo()
{
  ino1=0;
  ino2=0;
}
demo(int a,int b)
{
  ino1=a;
  ino2=b;
}
int division(int ino1,int ino2)
{
  int ans=0;
  ans=ino1/ino2;
return ans;

}
};

int main()
{
int ivalue1=44;
int ivalue2=2;
int iret=0;

demo obj;

cout<<"enter the first number\n";


cout<<"enter the second number\n";

iret=obj.division(ivalue1,ivalue2);
cout<<"division is"<<iret<<"\n";

 return 0;
}
