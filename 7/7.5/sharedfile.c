#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>


void FileInfo(ch);
{
    struct stat sobj;

   

    stat(ch,&sobj);

    printf("File name : %s\n",ch);
    printf("File size is : %d\n",sobj.st_size);
    printf("Number of links : %d\n",sobj.st_nlink);
    printf("Inode number : %d\n",sobj.st_ino);
    printf("File system number : %d\n",sobj.st_dev);
    printf("Number of blocks : %d\n",sobj.st_blocks);

    return 0;
}
