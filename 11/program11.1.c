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
void *ThreadProc2(void *ptr)
{
printf("Inside thread 2\n");
  pthread_exit(NULL);
}
void *ThreadProc3(void *ptr)
{
printf("Inside thread 3\n");
  pthread_exit(NULL);
}

void *ThreadProc4(void *ptr)
{
printf("Inside thread 4\n");
  pthread_exit(NULL);
}



int main()
{
  int Ret1 = 0, Ret2 = 0, Ret3 = 0, Ret4 = 0;

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
Ret2 = pthread_create(&TID2,NULL,ThreadProc2,NULL);
  if (Ret2 != 0)

{  
    printf("Unable to create thread\n");
      return -1;
}
else
{
  printf("thread creat succesfully\n");

}
Ret3 = pthread_create(&TID3,NULL,ThreadProc3,NULL);
  if (Ret3 != 0)

{  
    printf("Unable to create thread\n");
      return -1;
}
else
{
  printf("thread creat succesfully\n");

}
Ret4 = pthread_create(&TID4,NULL,ThreadProc4,NULL);
  if (Ret4 != 0)

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