#include <stdio.h>

int main(){
    int *p;
    int *q;
    q =NULL;
   // printf("*q..%p\n",*q);
    printf("&q..%p\n",&q);
    printf("q..%d\n",q);

  //  printf("*p..%p\n",*p);
    printf("&p..%p\n",&p);
    printf("p..%p\n",p);
    printf("*p..%d\n",*p);

}

/*
 * 在函数中有两个指针变量，其中一个的内容为空，另一个没有初始化。发现没有初始化的指针变量被随意指向了一处地址，而null pointer没有指向任何地方
 */

/*
/Users/yanan/projs/cmake-build-debug/cpointer
&q..0x7ffee8783960
q..0
&p..0x7ffee8783968
p..0x10cb1a1d2
*p..-125990072
*/