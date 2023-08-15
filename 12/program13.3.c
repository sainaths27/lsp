#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#define true 1
#define false 0
void sig_handler(int signo)
{
    int iRet = 0;
    if(signo == SIG)
    {
printf("receive signal");
    }
    else

    {
        printf("unable to receive signal");
    }

}




int main()
{

    int SIG = 0;
printf("enter the signal you want ");
scanf("%d",&SIG);
signal(SIG , sig_handler);

while(1);
sleep(1);

return 0;

}
