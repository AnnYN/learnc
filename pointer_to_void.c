int  main(){
    int num;
    int *pi = &num;
    printf("Value of pi:%p\n",pi);
    void *pv = pi;
    pi =(int*)pv;
    printf("value of pi:%p\n",pi);

}

/*
 * 类型为 void类型的变量可以指向任何类型，
  *
 */
/*
/Users/yanan/projs/cmake-build-debug/cpointer
Value of pi:0x7ffee3e5896c
value of pi:0x7ffee3e5896c





*/
