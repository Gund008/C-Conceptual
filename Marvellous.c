#include<stdio.h>


int Addtion(int ino1,int ino2)   
{  //block chi survat 
   int Ans=0;  //local variable
   Ans=ino1+ino2; //input argumnet chi addtion
   //berij keli by ALU

   return Ans;   
   //jyane call kela tyala value dya
}//Block cha shevat
//////////////////////////////////////////////////
//apla ghar
int main()  //itun program run hoto
{            //block chi survat
    int A=10;
    int B=11;
    int C=0;  //c mnge rikami pishvi

   C=Addtion(A,B);  //function call(declaration)

   printf("%d",C);  
   //ghrchyana bolun saga

   return 0; //os la smjal ki program success zala

}