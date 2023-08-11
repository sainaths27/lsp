#include<stdio.h>
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

    ret  = pthread_create(&TID,NULL,ThreadProc,NULL);
if (ret != 0)
{
  printf("unable to creat thread\n");
  return -1;
}


  pthread_join(TID,NULL);
    printf("End of main thread\n");
    return 0;
}
