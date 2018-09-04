int main() {
    char *pc = (char *) malloc(sizeof(6));
    printf("malloc %p\n",malloc(sizeof(6)));
    int i;
    printf("%lu\n", sizeof(6));
    printf("size of pc: %zu\n", sizeof(pc));//8
    printf("size of *pc: %lu\n", sizeof(*pc));//1  where is the space assigned by
    //for (i = 0; i < 6; i++) {
      //  *pc[i] = 0;
    }


/*assign size to string*/
	/*
	malloc 0x7fb1adc02730
	4
	size of pc: 8
	size of *pc: 1
	*/