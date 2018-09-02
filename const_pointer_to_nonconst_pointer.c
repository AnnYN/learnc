int main() {
    int num;
    int *const cpi = &num;

    *cpi = 50;

    printf("assign 50 to what cpi point to\n");
    printf("cpi--Address: %p: value:   %p    *cpi:   %d\n",&cpi, cpi, *cpi);

    *cpi =100;

    printf("assign 100 to what cpi point to\n");
    printf("cpi--Address: %p: value:   %p    *cpi:   %d\n",&cpi, cpi, *cpi);
    printf("the value of num: %d\n",num);


   // const int limit = 500;  error
    //int *const cpi = &limit;

}
/*
 *对于常量指针，该指针变量的内容是不可以被改变的，但是它可以改变所指向的变量的内容
 * const int limit = 500;
 * int *const cpi = &limit;
 */


/*
assign 50 to what cpi point to
cpi--Address: 0x7ffee3fd9960: value:   0x7ffee3fd996c    *cpi:   50
assign 100 to what cpi point to
cpi--Address: 0x7ffee3fd9960: value:   0x7ffee3fd996c    *cpi:   100
the value of num: 100
*/

