
typedef enum{
    A=0,
    B=1,
    C=2
} NAME;

typedef  enum{
    kid =10,
    youth =20,
    older =30
} AGE;

typedef  struct {
    NAME name;
    AGE age;


} Per,*P_Per;
int a;
int main(){
//    P_Per P;
//    //P =(P_Per)malloc(sizeof(P0));
//    printf("P:%p\n",P);
//
//    P->age = kid;
//    P->name = A;
//    printf("name:%d\n",(*P).name);
//    printf("age:%d\n",(*P).age);
//    //Per1.name=A;
//    //Per1.age=kid;
//    printf("age:%d\n",P->name);
//    printf("age:%d\n",P->age);
//    return(P);
    Per P;
    P.name =A;
    P.age = kid;
    printf("name:%d\n",P.name);
    printf("age:%d\n",P.age);


}


/*
name:0
age:10



*/