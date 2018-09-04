/*重新分配内存空间*/
int main(){
    char * string1;
    char * string2;

    string1 =(char*)malloc(10);
    strcpy(string1,"0123456789AB");
    string2 = realloc(string1, 8);
    printf("string1 Value: %p [%s]\n", string1, string1);
    printf("string2 Value: %p [%s]\n", string2, string2);

}
/*分配一个更小的内存空间realloc函数返回的是指针参数的地址
 * void *realloc(void *ptr, size_t size);
 *  memory is allocated from a different region of the heap and
 *  the old memory is copied to the new region
 * */

/*
/Users/yanan/projs/cmake-build-debug/cpointer
string1 Value: 0x7fd859c02720 [0123456789AB]
string2 Value: 0x7fd859c02720 [0123456789AB]
*/