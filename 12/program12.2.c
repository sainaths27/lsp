// Server for shared memory

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include <sys/shm.h>
int main()
{
  int shmid = 0;
  int shmsize = 0;
  int key = 124;
  char *ptr = NULL;

  printf("client application runnig ");

  shmid = shmget(key,shmsize,IPC_CREAT | 0666);
  printf("shared memory allocated succesfully....\n");
ptr = shmat(shmid, NULL,0);
 if (ptr != NULL)
 {
  printf(" shared memory attached succesfuuly ");
 }

 printf("data form  shared memory is :");
 while (*ptr  != '\0')
 {
  printf("%c ",*ptr);
  ptr++;
 }
 shmdt(shmid);
 return 0;
}
