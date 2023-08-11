#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

int Counter = 0;

pthread_mutex_t lock;
void * ThreadProc(void *ptr)
{
  pthread_mutex_lock(&lock);
  int i = 0;
  Counter++;
  printf("thread executive with counter :%d",Counter);
  for (i = 0 ; i<0xFFFFFFF; i++);
  printf("thread complete with counter :%d ",Counter);
  pthread_mutex_unlock(&lock);
  pthread_exit(NULL);
}

int main()
{
pthread_t TID1 , TID2 ;
int Ret = 0;


Ret = pthread_create(&TID1, NULL,ThreadProc, NULL);

if (Ret != 0)
{
  printf("unable to creat thread :");
  return -1;


}

Ret = pthread_create(&TID2, NULL,ThreadProc, NULL);

    if(Ret != 0)
    {
      printf("Unable to create thread\n");
      return -1;
    }
    
    pthread_join(TID1,NULL);
    pthread_join(TID2,NULL);

        pthread_mutex_destroy(&lock);

            printf("End of main thread\n");
    return 0;


}