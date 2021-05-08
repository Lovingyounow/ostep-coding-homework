#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[]){
    int rc = fork();
    if(rc ==0){
        printf("child hello\n");
    }else{
        sleep(1);
        printf("parent goodbye\n");
    }
    return 0;
}