#include<iostream>
using namespace std;
int main()
{
typedef int NUMBER;
typedef char LETTER;
NUMBER no=11;
LETTER ch='M';
cout<<sizeof(no)<<"\n";
cout<<no<<"\n";
cout<<sizeof(char)<<"\n";
cout<<char<<"\n";
typedef const int *CPTR;
//const int *p=NULL;
CPTR P=&no;
p=&no;
cout<<*p<<"\n";
return 0;
}