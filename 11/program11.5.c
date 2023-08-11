#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>

int counter = 0;
int i =0;
int fd = 0;
int iRet = 0;
    char Buffer[512];
void * ThreadProc(void * ptr )
{
  fd = open("demo.txt",0777);
  while ((iRet = read (fd,Buffer ,sizeof(Buffer)))!= 0)
{
  for (i = 0; i<iRet ; i++)
  {
     if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                counter++;
            }
            printf("Number of capital characters are : %d\n",counter);
  }
}
}

void * ThreadProc2(void * ptr )
{
  fd = open("demo.txt",0777);
  while ((iRet = read (fd,Buffer ,sizeof(Buffer)))!= 0)
{
  for (i = 0; i<iRet ; i++)
  {
     if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                counter++;
            }
            printf("Number of small characters are : %d\n",counter);
  }
}

}
int main()
{

  pthread_t TID1 , TID2 ;
  int iRet = 0 , iRet2 = 0;


  iRet = pthread_create(&TID1, NULL,ThreadProc,NULL);
  if (iRet != 0)
  {
    printf("unble to creat thread ");
  }

  else
  {
    printf("thread creat sucesfully ");
  }


  iRet2 = pthread_create(&TID2, NULL,ThreadProc2,NULL);
  if (iRet2 != 0)
  {
    printf("unble to creat thread ");
  }

  else
  {
    printf("thread creat sucesfully ");
  }
pthread_join(TID1,NULL);
pthread_join(TID2,NULL);

return 0;


}