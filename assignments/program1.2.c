#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc , char *argv[])
{

    int fd = 0; 
    int mode = 0;

    if (argc !=3)
    {
        printf("invalid  input:");

        return -1;
    }

    if (strcmp(argv[2],"read")==0)
    {
        mode = O_RDONLY;
    }
    else if (strcmp(argv[2],"write")==0)
    {

        mode = O_WRONLY;
    }
    else
    {
        mode =O_RDONLY;
    }
    fd = open(argv[1],mode);
    if (fd=-1)
    {
         printf("invalid  input:");

        return -1;
    }

    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);
    }

    return 0;
}
