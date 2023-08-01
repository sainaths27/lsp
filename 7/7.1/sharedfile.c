#include<stdio.h>
#include "sharedfile.h"

int addition (int iNo1 , int iNo2)
{
int iAns = 0;

iAns = iNo1 + iNo2 + iAns;

return iAns;
}
 
int subtraction(int iNo1 , int iNo2)
{
int isub = 0;

isub = iNo1 - iNo2 - isub;

return isub;
}

int division(int iNo1 , int iNo2)
{
int iDiv= 1;

iDiv= (iNo1 / iNo2) /iDiv;

return iDiv;
}
int Multiplication(int iNo1 , int iNo2)
{
int iMulti= 1;

iMulti = iNo1 * iNo2 * iMulti;

return iMulti;
}

// To create .o file
// gcc -c -fPIC sharedfile.c

// To create .so file
// gcc -shared -o library.so sharedfile.o
