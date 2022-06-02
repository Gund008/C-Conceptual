#include<stdio.h>

class add
{
 public:
 int a;
int b;
add()
{
 a=0;
 b=0;
}
add(int x,int y)
{
 a=x;
 b=y;
}
~add()
{
cout<<"inside destructor\n";
}

int addtion(int ino1,int ino2)
{
 int ans;
 ans=ino1+ino2;
 return ans;
}


};


int main()
{
int ivalue1=0;
int ivalue2=0;
int iret=0;
cout<<"enter the first number\n";
cin>>ivalue1;

cot<<"enter the second number\n";
cin>>ivalue2;

add obj;
add obj1(11,11);
iret=obj1.addtion();
cout<<"addtion is:"<<iret<<"\n";
  return 0;

}