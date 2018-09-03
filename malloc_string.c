int main() {
    char *pc = (char *) malloc(sizeof(6));
    int i;

    printf("size of pc: %zu\n", sizeof(pc));//8
    printf("size of *pc: %lu\n", sizeof(*pc));//1  where is the space assigned by
    for (i = 0; i < 6; i++) {
        *pc[i] = 0;
    }
}

/*assign size to string*/
