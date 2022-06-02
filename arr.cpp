#include<iostream>
using namespace std;
class integer
{
int m,n;
public:
integer(int,int);        //consructor parametrised

void display(void)
{
cout<<m<<"\n";
cout<<n<<"\n";
}
};
//public:
integer::integer(int x ,int y )
{
m=x;
n=y;
cout<<int2.x<<"\n";
cout<<int2.y<<"\n";
}
int main()
{
integer int1(0,100);
 integer int2=integer(25,75);

int1.display();
int2.display();
return 0;
}
