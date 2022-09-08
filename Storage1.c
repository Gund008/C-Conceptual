#include<stdio.h>

//Demo he function ch nav je tumi kahi pan deu shkta
//%d mhnge d for decimal
///n mhnge new line jyana apan new line var jato 


//auto keyword used 
void Demo()
{
    auto int A=10;
    A++;  //++ne ekane increment hote
    printf("%d\n",A);
}
void Hello()
{
    static int A=10;
    A++;
    printf("%d\n",A);
}
//////////////////////////////////////////////////
int main()
{
    Demo();  //auto keyword not preserve
    Demo();

    Hello(); //static keyword used preserve the value
    Hello();

    return 0;

}