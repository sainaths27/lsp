#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>


#pragma pack(1)
struct employee
{
    int empid ;
    char sname[20];
  
    int age;
};
int main(int argc, char *argv[])
{
 struct employee sobj;
    char Fname[20];
    int fd = 0;

     printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

read(fd,&sobj,sizeof(sobj));
printf("emp id:%d\n",sobj.empid);
printf("name :%s\n",sobj.sname);

printf("age :%d\n",sobj.age);

 close(fd);

    return 0;

}