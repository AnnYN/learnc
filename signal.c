//
// Created by YaNan on 2019/4/15.
//
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int code){
    printf("Code is: %d\n",code);
}

int main()
{
    signal(SIGTERM,signalHandler);
    int i = 0;

    while(1){
    i++;
    printf("i=%d;\n",i);
    sleep(2);
    }


}