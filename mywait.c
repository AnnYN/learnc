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

int main(int argc, char *argv[]){
    pid_t pid;
    pid = fork();
    if(pid == -1) {
        ERR_EXIT("fork error");

    }

    if(pid == 0){
        sleep(3);
        printf("this is child\n");
        //exit(100);
        abort(); //非正常退出

    }

    int ret;
    printf("This is parent\n");
    int status;
    ret = wait(&status);
   // ret = waitpid(-1,&status,0);
    //ret = waitpid(pid,&status,0);
    //printf("ret -%d pid - %d\n", ret, pid);
    if(WIFEXITED(status)){
        printf("进程退出：%d:\n",WEXITSTATUS(status));

    }
    else{
        printf("其他方式退出");
    }


}