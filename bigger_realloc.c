/*重新分配一块更大 的内存*/

int main(){
    char * string1;
    char * string2;

     string1 =(char*)malloc(16);
    strcpy(string1, "0123456789AB");
    string2 =realloc(string1,64);
    printf("string1 Value: %p [%s]\n", string1, string1);
    printf("string2 Value: %p [%s]\n", string2, string2);








}
/*
/Users/yanan/projs/cmake-build-debug/cpointer
string1 Value: 0x7fa5eec02720 [0123456789AB]
string2 Value: 0x7fa5eec02720 [0123456789AB]


*/