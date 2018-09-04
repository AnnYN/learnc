int main(){

    int *pi =(int *)malloc(sizeof(int)); //when i change int to char it can also run !
    *pi =5;
    printf("*pi: %d\n",*pi);
    free(pi);


    printf("size of char: %d\n", sizeof(char));
    printf("size of int: %d\n", sizeof(int));

}
/*use malloc to assign memory, a free function must be made*/

/*
*pi: 5
size of char: 1
size of int: 4
*/