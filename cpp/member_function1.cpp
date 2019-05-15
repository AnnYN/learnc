//
// Created by YaNan on 2019/5/15.
//



#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Car{
    string owner = "yanan"; //private
public:
    string  color;
    string  type;
    void  turnOn(){ //declare a member function inside class
        cout <<"The owner of this car: "<<owner<<endl;
        cout<<"The color of this car: "<<color<<endl;
        cout<<"The type of this car: "<<type<<endl;
    }
};
