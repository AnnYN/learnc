/*check a variable after malloc it */
int main(){
    int * pi =(int*)(malloc(sizeof(int )));
    if(pi!=NULL){
        printf("good pointer!");
    }else{
        printf("bad pointer!");
    }
    return  0;
}

/*good pointer!
*/