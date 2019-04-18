//
// Created by YaNan on 2019/4/18.
//

#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <signal.h>




int main(){

    char *available_resources[] = {
            "color monitor",
            "big disk",

            "Cray" /*           whoa! no comma! */

            "on-line drawing routines",

            "mouse",
            "keyboard",
            "power cables",     /* and what’s this extra comma? */
    };

    printf("%s\n",available_resources[2]);

    printf( "A second favorite children’s book "
            "is ‘Thomas the tank engine and the Naughty Enginedriver who "
            "tied down Thomas’s boiler safety valve’\n" );
    return 0;

}