#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{

    char ch [20];
  printf("enter file name");
  scanf("%s",ch);

  FileInfo(ch);

}
