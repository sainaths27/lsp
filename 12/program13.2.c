#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void sig_handler(int signo)
{
    int iRet = 0;
    if(signo == SIGINT)
    {
iRet = fork();
printf("child is created");
    }

    
 
   

}




int main()
{
printf("Able to receive the signal\n");
signal(SIGINT , sig_handler);

while(1);
sleep(1);

return 0;

}
