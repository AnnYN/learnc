# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char *my_strcpy(char * dest, const char* src){


    assert((dest!=NULL )&&(src!=NULL));


    char *temp = dest;
    while((*dest++ = *src++)!= NULL ){
    }

    return temp;
}



    int main(){
        char a[20];
        my_strcpy(a, "hello world");
        printf("%s\n", a);
        system("pause");
        return 0;
    }
