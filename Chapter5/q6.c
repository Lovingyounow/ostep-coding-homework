#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char * argv[]){
    int rc = fork();
    if(rc > 0){
        int id = waitpid(rc);
        printf("%d\n",id);
        printf("goodbye,pid:%d\n",getpid());
    }else if(rc == 0){
        sleep(1);
        int child_id = waitpid(NULL);
        printf("hello,pid:%d,child_id:%d\n",getpid(),child_id);
    }
    return 0;
}



