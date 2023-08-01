#include<stdio.h>
#include "sharedfile.h"
#include "sharedfile2.h"
void ChkFactorial(int iNo)
{
int iCnt = 0;
int iMult = 1;

for (iCnt =  ; iCnt< iNo/2; iCnt++)

if ((iNo %iCnt)!=0)
{


iMult = iCnt *iMult;
  printf(" factorial is " , iMult);
}
else
{
 printf("number is  not prime number" );
}
}
int main ()  
{
   int ivalue = 0;

   printf(" enter the number :");
   scanf("%d",&ivalue);
ChkFactorial(ivalue);


    return 0;

}

// To create .o file
// gcc -c -fPIC sharedfile.c

        
// To create .so file
// gcc -shared -o library.so sharedfile.o
