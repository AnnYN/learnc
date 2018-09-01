
#include <stdio.h>
//
//
//
int main(void){
    int hoge = 5;
    int piyo = 10;
    int *hoge_p ;
    int **hoge_d;


    /*输出每个变量的地址*/

    printf("&hoge..%p\n",&hoge);
    printf("&piyo..%p\n",&piyo);
    printf("&hoge_p..%p\n",&hoge_p);


    /*把hoge的值传给hoge_p*/
    hoge_p = &hoge;
    printf("hoge_p..%p\n",hoge_p);


    /*通过hoge_p输出hoge的内容*/
    printf("*hoge_p..%p\n",*hoge_p);

    /*通过hoge_p修改hoge的内容*/
    *hoge_p = 10;
    printf("hoge..%d\n",hoge);
 printf("*hoge_p..%p\n",&*hoge_p);


    /*针对**的操作*/

    hoge_d =&*hoge_p;
    printf("**hoge_d..%p\n",**hoge_d);
    printf("&hoge_d..%p\n",&hoge_d);

    return 0;



/*
指针是一个变量，在申明的时候*标志使得编译器知道这是一个指针变量，指针变量存储的东西被被编译器认为是地址，该指针指向这个地址，指针的内容为
 该地址的值，整个指针是一个变量，在内存上有分配空间，对于指针指向的变量的值，可以通过指针来进行修改 */

}