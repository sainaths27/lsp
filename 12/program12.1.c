#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h> 



int main()
{

int iRet = 0;
int FD[2];


pipe(FD);

iRet = fork();

if (iRet ==0)
{
  printf("child process scheduled for writning into pipe\n");
  close(FD[0]);
}
else
{
  printf(" parent  process scheduled for reading  from pipe\n");
  close(FD[1]);
}

return 0;

}