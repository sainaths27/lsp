#include<stdio.h>

#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define BLOCKSIZE 1024
int main(int argc, char *argv[])
{
  
    int fdsource = 0;
    int fddest=0;
    int ret = 0;
    char Buffer [BLOCKSIZE]={'\0'};

    if(argc != 3)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
    fdsource = open(argv[1],O_RDONLY);
      if(fdsource == -1)
    {
        printf("Unable to open source file\n");
        return -1;
    }
fddest = creat(argv[2],0777);
    if(fddest == -1)
    {
        printf("Unable to create destination file\n");
        close(fdsource);
        return -1;
    }
    while((ret = read(fdsource,Buffer,sizeof(Buffer)))!=0)
    {
        write(fddest,Buffer,ret);
        memset(Buffer,0,sizeof(Buffer));
    }
       close(fdsource);
    close(fddest);

}