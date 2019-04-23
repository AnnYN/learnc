//
// Created by YaNan on 2019/4/15.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getMem(char *p, char *mem1, int *len){

    if(mem1 != Null){

        memcpy(mem1, "abc");
    }

    //len = 10;
}

int main(){

    int len = 0;
    char *p = NULL;
    getMem("aaa",NULL, &len);
    p = (char *)malloc(len);
    getMem("aaa", p , &len);


}