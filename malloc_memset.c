/*use malloc &memset instead of calloc*/
int main(){
    int * pi =(int*)malloc(5* sizeof(int));
    memset(pi,0,5* sizeof(int));

  printf("&p: %p\n",pi);
  printf("size of *p: %d\n", sizeof(*pi));
  printf("*p[1]: %d\n",pi[1]);


}
&p: 0x7fcb49402720
size of *p: 4
*p[1]: 0


/*memset(&,num,size)*/