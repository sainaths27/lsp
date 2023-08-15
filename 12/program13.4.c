#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void sig_handler(int signo)
{
    if(signo == SIGINT)
      printf("received SIGINT\n");
    printf("received signal is  %d",signo);

}




int main()
{
printf("able to receive the signal\n");
signal(SIGINT , sig_handler);

while(1);
sleep(1);

return 0;

}
