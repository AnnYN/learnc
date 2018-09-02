int main(){
    int vector[]={28,41,7};
    int *p0 = vector;
    int *p1 = vector+1;
    int *p2 = vector+2;

    //输出指针变量的内容
    printf("p0.....%p\n",p0);
    printf("p1.....%p\n",p1);
    printf("p2.....%p\n",p2);


    //输出指针变量指向的值
    printf("*p0.....%d\n",*p0);
    printf("*p1.....%d\n",*p1);
    printf("*p2.....%d\n",*p2);

    printf("p2>p0: %d\n",p2>p0);
    printf("p2<p0: %d\n",p2<p0);
    printf("p0>p1: %d\n",p0>p1);


    return 0;
}



/*
p0.....0x7ffeef0a095c
p1.....0x7ffeef0a0960
p2.....0x7ffeef0a0964
*p0.....28
*p1.....41
*p2.....7
p2>p0: 1
p2<p0: 0
p0>p1: 0
*/