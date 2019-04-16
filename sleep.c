//
// Created by YaNan on 2019/4/16.
//

#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <signal.h>

void handler(int num){

    printf("recv num: %d\n",num);
    if(num == SIGQUIT){
        exit(0);
    }
}


int main(){
    pid_t pid;
    int n =100;
    printf("main .......begin\n");
    //sigint 是2号信号（CTRL C）会中断程序
    signal(SIGINT, handler);
 //sleep(100);//可中断睡眠
    do{
        n = sleep(n);
        printf("请睡够....");
    }while(n>0);
 printf("sleep结束");


}