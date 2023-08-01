#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/dir.h>


int main (int argc, char *argv[])
{
int fdDest = 0;
char DirName[20];
DIR *dp = NULL;
struct dirent  *entry = NULL;
 printf("Enter name of directory : \n");
    scanf("%s",DirName);

    dp = opendir(DirName);

fdDest = creat("Demo.txt",0777);
 {
        printf("Unable to open the directory\n");
        return -1;
    } 
    while ((entry = readdir(dp))  != NULL)
{
   write(fdDest,entry->d_name);
}

  closedir(dp);
    
    return 0;

}
