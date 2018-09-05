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


} Per,*P_Per; //typedef把结构体申明为别名
int a;
int main(){
    P_Per P;   //申明一个结构体指针
    //P =(P_Per)malloc(sizeof(P0));
    printf("P:%p\n",P);

    P->age = kid;  
    P->name = A;
    printf("name:%d\n",(*P).name);//结构体指针访问方式之一，比较少用
    printf("age:%d\n",(*P).age);  //结构体指针访问方式之二，常用
    //Per1.name=A;
    //Per1.age=kid;
    printf("age:%d\n",P->name);
    printf("age:%d\n",P->age);
}
/*
P:0x7ffeeb2c1980
name:0
age:0
age:0
age:10
*/