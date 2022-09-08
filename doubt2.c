#include<stdio.h>
#include<stdlib.h>


int main()
{
    int size=0;
    int *ptr=NULL;

    printf("Enter number of elemets:");
    scanf("%d",&size);

    //alloacte the memory
    ptr=(int*)malloc(size*sizeof(int)); //typecasting
    if(ptr==NULL)
    {
           printf("Unable to allocate memory\n");
    }
    else 
    {
        printf("Memory successfully allocated\n");
    }

  //step 2:use the memory
   free(ptr);  //step-Free the memory
    return 0;

}