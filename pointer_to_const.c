
int main(){
    int num = 5;
    const int  limit =500;

    int *p;
    const int* pi;

    p =&num;
    pi = &limit;

    printf(" num - Address :%p  value:  %d\n",&num,num);
    printf("limit - Address:%p  value:  %d\n",&limit,limit);


    printf(" p - Address :%p  value:  %p\n",&p,p);
    printf("pi - Address:%p  value:  %p\n",&pi,pi);

    printf("%d\n",*pi);



    *p = 10;
    printf("change num use pointer p\n");
    printf(" num - Address :%p  value:  %d\n",&num,num);
    printf(" p - Address :%p  value:  %p  *p:   %d\n",&p,p,*p);




    pi=&num;
    printf("change the value of pi:\n");
    printf("pi - Address:%p  value:  %p    *pi: %d \n",&pi,pi,*pi);

}
/*
 *  对于指向常量的指针来说，它不可以改变它所指向变量本身的值，但是指针变量本身的值是可以改变的，也就是说当指针指向一个常量时候，它不可以改变这个常量的值
 *  但是指针可以改变它自身的值
 *
 *
 */

/*

/Users/yanan/projs/cmake-build-debug/cpointer
 num - Address :0x7ffee415e96c  value:  5
limit - Address:0x7ffee415e968  value:  500
 p - Address :0x7ffee415e960  value:  0x7ffee415e96c
pi - Address:0x7ffee415e958  value:  0x7ffee415e968
500
change num use pointer p
 num - Address :0x7ffee415e96c  value:  10
 p - Address :0x7ffee415e960  value:  0x7ffee415e96c  *p:   10
change the value of pi:
pi - Address:0x7ffee415e958  value:  0x7ffee415e96c    *pi: 10 

*/







