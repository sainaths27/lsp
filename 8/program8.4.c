#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 
int main()
{
int Ret = 0, Ret1 = 0;
int cpid1= 0, cpid2 = 0;
int Exit_status = 0;
int Exit_status2= 0;
 Ret = fork();
 if (Ret == 0)
 {
    execl("./childprocess2","NULL",NULL);
 }
 else
 {
    printf(" parent is runnig with pid :%d",getpid());
    printf("child process pid %d",Ret);
    
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
 cpid1 = wait(&Exit_status);
  cpid2 = wait(&Exit_status2);
 
       printf("Child process terminated having PID %d with exit status %d\n",cpid1,Exit_status);

       printf("Child process terminated having PID %d with exit status %d\n",cpid2,Exit_status);

 return 0;

}
