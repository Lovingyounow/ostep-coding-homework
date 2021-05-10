#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char * argv[]){
    int rc = fork();
    if(rc > 0){
        wait(NULL);
        printf("goodbye,pid:%d\n",getpid());
    }else if(rc == 0){
        sleep(1);
        close(STDOUT_FILENO);
        printf("hello,pid:%d\n",getpid());
    }
    return 0;
}

/*
没有输出在长度命令行中
*/
