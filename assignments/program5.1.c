#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>


#pragma pack(1)
struct student
{
    int Rollno;
    char sname[20];
    float mark;
    int age;
};
int main(int argc, char *argv[])
{
 struct student sobj;
    char Fname[20];
    int fd = 0;

     printf("Enter the file name : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

read(fd,&sobj,sizeof(sobj));
printf("roll no :%d\n",sobj.Rollno);
printf("name :%s\n",sobj.sname);
printf("mark:%f\n",sobj.mark);
printf("age :%d\n",sobj.age);

 close(fd);

    return 0;

}