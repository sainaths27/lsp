#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int Ret = 0, Ret1 = 0;

 Ret = fork();
 if (Ret == 0)
 {
    execl("./childprocess2","NULL",NULL);
 }
 else
 {
    printf(" parent is runnig with pid :%d",getpid());
    printf("child process pid %d",Ret);
    slee
 }
 Ret1= fork();
 if (Ret1== 0)
 {
    execl("./childprocess3","NULL",NULL);
 }
 else
 {
    printf(" parent is runnig with pid :%d",getpid());
    printf("child process pid %d",Ret1);
   
 }

 return 0;

}
