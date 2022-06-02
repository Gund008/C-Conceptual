#include<iostream>
using namespace std;
class person                                   //structure
{                                             // strcut person
   char name[30];                             // {
   int age;   
   public:                                    // char name[30];
   void getdata(void);                          //   int age;
  void dispay(void);                           //  };                                             //  int main() 
};    
void person::getdata(void)
{
cout<<"enter name:";
cin>>name;
cout<<"enter age:";
cin>>age;
}
void person::display(void)
{
cout<<"\nname:"<<name;
cout<<"\nage:"<<age;
}                                        // struct person p
int main()                                   // p.name=sukanya;
{                                           //  p.age=23;
   person p;
  p.getdata();
  p.display();
return 0;
}