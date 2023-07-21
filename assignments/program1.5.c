#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    int Ret = 0;
    char *Buffer = NULL;
    int Size = 0;
    char fname [20];

    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    printf("enter the name of file ");
    scanf("%s",fname);
    printf("enter the byte you want to read ");
    scanf("%d",Size);


    fd = open(fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
       printf("succesfuly  to open file\n");  
    }

  

       Buffer = (char *)malloc(Size);

    Ret = read(fd,Buffer,Size);
    if(Ret == 0)
    {
        printf("Unable to read data from file\n");
        return -1;
    }

    printf("Data from file is : \n");
    write(1,Buffer,Ret);

    return 0;
}