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
    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
printf("enter the name for  directory ");
scanf("%s",Fname);
printf("enter the name in which you copy the data ");
scanf("%s",Fname2);

    dp = opendir(Fname);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");   
        return -1;

}
while(ret = readdir(dp)!= NULL)
{
   write(Fname2,Buffer,ret);
}
printf("%d"datasuccesfull write ,ret);
return 0;
}