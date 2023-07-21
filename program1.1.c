#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc , char argv[])

{
int fd = 0;
char fname[20];

printf("enter the name of file :");
scanf("%s",fname);

fd = open(fname,0777);

printf("file is succesfully open with %d fd ",fd);

return 0 ;
}
