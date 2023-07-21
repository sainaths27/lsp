#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
   int Ret =0;
      char Buffer[20];

int size =0;
int fd = 0;


if (argc !=3)
{
          printf("Insufficient arguments\n");
        return -1;
}


printf("enter the string you want  :");
scanf("%s",Buffer);

fd = open(argv[1],O_RDONLY);
if (fd ==-1)
{
     printf("Unable to open file\n");
        return -1;
}
size = atoi(Buffer);
while((Ret= read(fd,Buffer,size))!= 0)
{
    write(1,Buffer,Ret);
}

printf("%d succesfully read from file",Ret);
close(fd);
return 0;
}