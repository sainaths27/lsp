#include<stdio.h>
#include "sharedfile.h"
#include "sharedfile2.h"

void  chkperfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
        if (iSum == iNo)

{
printf("number is perfect numbber")
    }

}

int main ()  
{
   int ivalue = 0;

   printf(" enter the number :");
   scanf("%d",&ivalue);
Chkperfect (ivalue);


    return 0;

}
