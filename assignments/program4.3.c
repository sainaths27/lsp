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
    DIR *dp = NULL;
    struct dirent * entry = NULL;
char Fname[20];
char Fname2[20];
  int ret = 0;

    char Buffer[BLOCKSIZE] = {'\0'};
    if(argc != 3)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
printf("enter the name for first directory ");
scanf("%s",Fname);
printf("enter the name for  secound directory ");
scanf("%s",Fname2);
    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;

}
while(ret = readdir(dp)!= NULL)
{
    memcmp(Fname,Fname2,sizeof(Buffer));
}
printf("%d"succesfull read ,ret);
return 0;
}