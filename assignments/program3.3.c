#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>
#define BLOCKSIZE 1024

int main(int argc, char *argv[])
{
    int fdSource = 0;
    int fdDest = 0;
    int Ret = 0;

    char Buffer[BLOCKSIZE] = {'\0'};

    if(argc != 3)
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    fdSource = opendir(argv[1],O_RDONLY);
    if(fdSource == -1)
    {
        printf("Unable to open source  directory file\n");
        return -1;
    }

    fdDest = creatdir(argv[2],0777);
    if(fdDest == -1)
    {
        printf("Unable to create destination  dir file\n");
        close(fdSource);
        return -1;
    }

    while((Ret = read(fdSource,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdDest,Buffer,Ret);
        memset(Buffer,0,sizeof(Buffer));
    }

    close(fdSource);
    close(fdDest);

    return 0;
}