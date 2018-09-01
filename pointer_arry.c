#include <stdio.h>
#include <stdlib.h>
int main() {
    char *names[] = {"Miller", "Jones", "Anderson"};
   // printf("%c\n",*(names+1));
    printf("%c\n", *(*(names + 1) + 2));
    printf("%c\n", names[1][2]);
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(char));
    printf("%d\n", sizeof(names));


}
