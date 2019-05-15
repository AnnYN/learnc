//
// Created by YaNan on 2019/5/14.
//
#include <iostream>
#include <string>

class A{
    int private_v = 3;//私有变量，仅仅在class内部可见
public:
int public_v;//公有变量，
    static  int static_v ; //静态变量，在整个cpp文件中都可见


};

int A::static_v = 3;


int main(){
    A a;
    a.public_v=2;
     //静态变量声明
    std::cout<<"public var : "<<a.public_v<<'\n'<<"static var: "<<a.static_v<<std::endl;
}
//class B{
//    friend class C;
//    int b = 0;
//
//
//};
//
//class C{
//    int c  = 0;
//    void access_a(const A& object);
//
//};
//
//
//void access_a(C c){
//
//
//}
//int main(){
//    C c;
//}