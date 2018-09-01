

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void memorylocate(char **ptr){

    *ptr=(char*)malloc(10* sizeof(char));
    printf("in func memlocate &*ptr %p\n",&*ptr);//双指针变量的地址
    printf("in func memlocate &ptr %p\n",&ptr);//内部指针变量的内容，某个变量的地址
    printf("in func memlocate *ptr %p\n",*ptr);//内部指针变量所指向地址的变量的值


}
int main(int argc,char **argv){

    char *buffer;
    printf("buffer %d\n",buffer); //输出buffer变量的值，保存了一个空地址；
    //printf("*buffer %d\n",*buffer);
    printf("&buffer %p\n",&buffer);//输出buffer指针变量的地址

    memorylocate(&buffer);
    printf("&*buffer %p\n",&*buffer);//输出双指针变量地址
    printf("&buffer %p\n",&buffer);//输出指针变量地址的地址
    printf("**buffer %d\n",*buffer);//输出双指针变量的内容
    strcpy(buffer,"12345");
    // *buffer = 111111;

    printf("buffer %s\n",buffer);
    printf("&*buffer  %p\n",&*buffer);
    printf("&buffer %s\n",&buffer);
    return 0;


}
/*
 * /Users/yanan/projs/cmake-build-debug/cpointer
buffer 0
&buffer 0x7ffeeb6d6958
in func memlocate &*ptr 0x7ffeeb6d6958
in func memlocate &ptr 0x7ffeeb6d6908
in func memlocate *ptr 0x7fa0bec02720
&*buffer 0x7fa0bec02720
&buffer 0x7ffeeb6d6958
**buffer 0
buffer 12345
&*buffer  0x7fa0bec02720
&buffer  '���

Process finished with exit code 0
 */