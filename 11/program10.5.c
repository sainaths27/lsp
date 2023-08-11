#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

void * ThreadProc(void *ptr)
{

  printf("thread is created ");

}

int main()
{
    pthread_t TID;

int ret = 0;
    ret = pthread_create(&TID,            
                          NULL,           
                          ThreadProc,     
                          NULL);     

    if(ret != 0)
    {
      printf("Unable to create thread\n");
      return -1;
    }
 pthread_join(TID,NULL);
    printf("Thread is created with ID : %d\n",TID);
   
    

    printf("End of main thread\n");
    return 0;
}