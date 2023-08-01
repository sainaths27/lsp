#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
 char Buffer [512];

 int FdSource1 = 0, FdSource2 = 0;
 int iCnt = 0 , iRet = 0 ,iRet2 = 0, i =0,iCnt2 = 0;
 int FdDest = 0;

 FdSource1 = open("Demo.txt",O_RDONLY);

 FdDest = creat("count.txt",0777);
 while((iRet = read(FdSource1,Buffer,sizeof(Buffer)))!=0)
 {
    for (iCnt = 0; iCnt<iRet ; iCnt++)
    {
       if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iCnt++;
                write(FdDest,Buffer,iRet);
                memset(Buffer,0,sizeof(Buffer));

            }
    }

 }
  FdSource2 = open("hello.txt",O_RDONLY);
  while((iRet2 = read(FdSource2,Buffer,sizeof(Buffer)))!=0)
 {
    for (iCnt = 0; iCnt<iRet ; iCnt++)
    {
       if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iCnt2++;
                write(FdDest,Buffer,iRet);
              memset(Buffer,12,sizeof(Buffer));

            }
    }

 }

  close(FdSource1);
    close(FdSource2);
    close(FdDest);
    return 0;
}