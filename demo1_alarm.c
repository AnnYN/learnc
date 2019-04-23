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

void myhandle(int num){
    printf("recv signal id num: %d\n", num);
    alarm(1);

}

int main(){

    printf("main ......begin");
    if(signal(SIGALRM,myhandle)== SIG_ERR){
        perror("func signal err\n");
        return 0;

    }
    alarm(1);
    while(1){
        pause();
        printf("pause retrurn\n");
    }





}

