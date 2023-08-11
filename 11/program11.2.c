#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>



void *ThreadProc(void *ptr)
{
printf("Inside thread 1\n");
  pthread_exit(NULL);
}




int main()
{
  int Ret1 = 0;

pthread_t  TID1, TID2, TID3,TID4;
  Ret1 = pthread_create(&TID1,NULL,ThreadProc,NULL);
  if (Ret1 != 0)

{  
    printf("Unable to create thread\n");
      return -1;
}
else
{
  printf("thread creat succesfully\n");

}
 
 pthread_join(TID1,NULL);
 printf("End of main thread\n");
    
    pthread_exit(NULL);
    return 0;
}