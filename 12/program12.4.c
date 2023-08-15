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
int fd = 0;
char *path = "/temp/mypipe";
char Buffer [100];


printf("client is runnig and  reading data from named pipe ");
fd = open(path_RDONLY);
read(fd , Buffer,sizeof(Buffer));

printf("DATA from  pipe is :%s",Buffer);
return 0;
}
