int main(){
    int const num = 0;
    const int * const cpi =num;

    printf("num--Address: %p value:  %d\n",&num, num);
    printf("cpi--address:%p value:  %p    *cpi:  %d\n",&cpi,cpi,*cpi);

   // *cpi = 100; error

    //  cpi = & limit; error



}
/*对于指向常量类型的常量指针，指针变量本身的值无法改变，并且指针变量所指向的变量也不可以通过指针被改变*/