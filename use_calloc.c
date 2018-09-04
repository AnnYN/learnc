/* use calloc */
int main(){
    int * p = calloc(5, sizeof(int));
    printf("&p: %p\n",p);
    printf("size of *p: %d\n", sizeof(*p));
    printf("*p[1]: %d\n",p[1]);
}
/*使用calloc函数时候，分配的空间被初始化为0*/

/*
&p: 0x7ff9036001c0
size of *p: 4
*p[1]: 0
*/