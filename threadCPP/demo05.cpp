//
// Created by YaNan on 2019/5/14.
//

//Copy Constructors and Assignment Operators

#include <iostream>
#include <string>
struct A{
    A(){}
    A(const A& a){
        std::cout <<"Copy construct A"<<std::endl;
    }


};

struct B{
    B(){}
    B(const B& a){
        std::cout<<"copy construct B"<<std::endl;
    }

};


class C{
    A a;
    B b;
    //the copy constructor is implicitly generated
};

int main(){
    C first;
    C second(first);
    //prints :"copy construct A","Copy construct B"

}


//














