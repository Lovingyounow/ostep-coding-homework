#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[]){
    int x = 100;
    printf("in the main process x:%d\n",x);
    int rc = fork();
    if(rc == 0){
        printf("in the child x:%d\n",x);
        x = 10;
        printf("child change x, x:%d\n",x);
    }else{
        printf("in the parent x:%d\n",x);
        x = 20;
        printf("parent change x, x:%d\n",x);
        sleep(1);
    }
    printf("now x is:%d\n",x);
    return 0;
}