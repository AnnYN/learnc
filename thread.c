//
// Created by YaNan on 2019/4/22.
//

#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

void* myFunction1(void* msg);
void* myFunction2(void* msg);



int a[100];
pthread_mutex_t mutex;


int  main(){

    char *msg1 = "This is thread1\n";
    char *msg2 = "This is thread2\n";

    pthread_t thread1, thread2;
    memset(a, 0 , sizeof(a));


    pthread_create(&thread1, NULL, myFunction1, (void*)msg1);
    pthread_create(&thread2, NULL, myFunction2, (void*)msg2);



    pthread_join(thread1, NULL);
    pthread_join(thread2,NULL);

return 0;

}


void * myFunction1(void* msg){
   // char *s1 = (char*)(msg);
    printf("%s",msg);
    sleep(1);

    for(int i = 0; i<100;i++){
        threa_mutes_lock(&mutex);
        printf("X");
        a[i] = i+1;
        unsleep(50);
        pthread_mutex_unlock(&muteex);


    }
    return (void*)0;
}

void *myFunction2(void* msg){
    printf("%s",(char*)(msg));
sleep(1);

    for (i=0;i<100;i+=1){

        while(a[i] == 0){

            unsleep(1);
        }

        pthread_mutex_lock(&mute);
        printf("%d, ", a[i]);
        pthread_mutex_unlock(&mutex);



    }


    return (void*)0;



}

