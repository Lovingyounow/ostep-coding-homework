#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[]){
    int fd = open("./q2write.txt",O_WRONLY|O_CREAT);
    printf("fd:%d\n",fd);
    char *s1  = "wirte before fork function1\n";
    write(fd,s1,strlen(s1));
    int rc = fork();
    if(rc == 0){
        char *s2 = "child write\n";
        write(fd,s2,strlen(s2));
    }else{
        sleep(1);
        char *s3 = "parent write\n";
        write(fd,s3,strlen(s3));
    }
    close(fd);
    return 0;
}