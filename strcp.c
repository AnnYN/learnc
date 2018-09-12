#include <string.h>
#include <stdio.h>


int main(int arg, const char *argv[]){
    /* Create an example variable capable of holding 50 characters */
    char example[50];


    /* Copy the string "TechOnTheNet.com knows strcpy!" into the example variable */
    strcpy(example,"TechOnTheNet.com knows strcpy!");

    /* Display the contents of the example variable to the screen */
    printf("%s\n", example);

    return 0;




}



/*
char *strcpy(char *s1, const char *s2);

Parameters or Arguments

s1
    An array where s2 will be copied to.
s2
    The string to be copied. 


*/