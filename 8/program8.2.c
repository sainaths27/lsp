#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int Ret = 0,Ret1 = 0;
 

    Ret = fork();

    if(Ret == 0)  
    {
        execl("./ChildProcess","NULL",NULL);
    }
    else        
    {
         
        printf("Parent is running with PID : %d\n",getpid());
     printf("child process pid %d\n",Ret);
    }
     Ret1 = fork();

    if(Ret1 == 0)  
    {
        execl("./ChildProcess2","NULL",NULL);
    }
    else        
    {
        printf("Parent is running with PID : %d\n",getpid());
             printf("child process pid %d\n",Ret1);
            
 
    }

    return 0;
}
