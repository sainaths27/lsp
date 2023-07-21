#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
    DIR *dp = NULL;
    struct dirent * entry = NULL;
char Fname[20];
    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
printf("enter the name for directory ");
scanf("%s",Fname);
    dp = Mkdir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to creat directory\n");
        return -1;

}
return 0;
}