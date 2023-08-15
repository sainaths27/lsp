// Server for shared memory

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include <sys/shm.h>
int main()
{
 int iRet = 0;
 int FD [2];
 char Arr[]= "Marvellous";
char Buffer[512];

 pipe(FD);
 iRet = fork();

 if (iRet == 0)
 {
  printf("child is writing\n");
  close( FD[0]);
  write(FD[1],Arr,strlen(Arr));
  exit(0);
 }
 else
 {
    printf("parent is reading");
    close(FD[1]);
    read(FD[0],Buffer,sizeof(Buffer));
    printf("data is %s",Buffer);

 }
 return 0;
}
