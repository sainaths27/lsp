#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>


int counter =0;
int counnter2 = 0;
void * ThreadProc(void *ptr)
{
  int i = 0, j = 0;
  for ( j = 500; j>0;j--)
  counter++;
printf("count is :%d ",counter);
for ( i = 0; i<500;i++)
counnter2++;
printf("thread COMPLETE with counter :%d ",counnter2);

  pthread_exit(NULL);
}

int main()
{
    pthread_t TID1 , TID2;
    int ret = 0;
   
    ret = pthread_create(&TID1,         
                          NULL,          
                          ThreadProc,    
                          NULL);     

    if(ret != 0)
    {
      printf("Unable to create thread\n");
      return -1;
    }

     
    ret = pthread_create(&TID2,            
                          NULL,           
                          ThreadProc,     
                          NULL);     

    if(ret != 0)
    {
      printf("Unable to create thread\n");
      return -1;
    }


  
    pthread_join(TID1,NULL);
      pthread_join(TID2,NULL);
   
    printf("End of main thread\n");
    return 0;
}