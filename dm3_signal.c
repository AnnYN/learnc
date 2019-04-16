//
// Created by YaNan on 2019/4/16.
//

//
// Created by YaNan on 2019/4/15.
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

#define ERR_EXIT(m)\
do\
{\
perror(m);\
exit(EXIT_FAILURE);\
} while(0)


void myhandle(int num){
    if(num == SIGINT){
        printf("recv signal SIGINT \n");
    }
        else if(num == SIGUSR1){

            printf("recv signal SIGINT \n");


        }
        else{
            printf("recv signal id num: %d \n", num);
        }



}


int main(int argc, char *argv[]){
    pid_t pid;
    pid = fork();
    if(pid == -1) {
        ERR_EXIT("fork error");

    }

    if(signal(SIGINT, myhandle)==SIG_ERR){
        perror("func signal error\n");
        return 0;
    }
    if(signal(SIGUSR1,myhandle)==SIG_ERR){
        perror("func signal error\n");
        return 0;
    }


    if(pid == 0){

        pid = getpid();
    kill(pid,SIGUSR1);//向父进程发送信号
       // kill(0, SIGUSR1);//向进程组发送信号
        exit(0);
//        sleep(3);
//        printf("this is child\n");
//        //exit(100);
//        abort(); //非正常退出

    }

    int n = 3;
    do {
    printf("父进程开始休眠\n");
    n = sleep(n);
    printf("父进程开始唤醒\n");

//    int ret;
//    printf("This is parent\n");
//    int status;
//    ret = wait(&status);
//    // ret = waitpid(-1,&status,0);
//    //ret = waitpid(pid,&status,0);
//    //printf("ret -%d pid - %d\n", ret, pid);
//    if(WIFEXITED(status)){
//        printf("进程退出：%d:\n",WEXITSTATUS(status));
//
//    }
//    else{
//        printf("其他方式退出");
    }while(n>0);


}