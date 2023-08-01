#include<stdio.h>
#include "sharedfile.h"
#define BLOCKSIZE 1024
int main (int  argc , char argv[])  
{
    int fd1= 0 , fd2  = 0;
    int Ret1= 0, Ret2 = 0;
    char Buffer[BLOCKSIZE];

fd1 =open(argc[1],0777)
if (fd == -1)
{
    printf(" unable to open");
}
else
{
    printf("suceesfully open");
}
    Ret1= read(fd,Buffer,sizeof(Buffer));
    if(Ret1 == 0)
  {
printf("Unable to read data from file\n");
        return -1;
    }
 printf("Data from file is : %s\n",Buffer);

  Ret2= read(fd,Buffer,sizeof(Buffer));
    if(Ret2 == 0)
  {
printf("Unable to read data from file\n");
        return -1;
    }
 printf("Data from file is : %s\n",Buffer);


    return 0;

}

// To create .o file
// gcc -c -fPIC sharedfile.c

        
// To create .so file
// gcc -shared -o library.so sharedfile.o