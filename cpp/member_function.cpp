//
// Created by YaNan on 2019/5/15.
//

// manipulate the data of class

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
    int num;
    void order();
    void  turnOn() { //declare a member function inside class
        cout << "The owner of this car: " << owner << endl;
        cout << "The color of this car: " << color << endl;
        cout << "The type of this car: " << type << endl;
    }

    void getColor(){
        cout<<"The color is: "<< color<<endl;
    }

 const void getType() const { //declare a const func inside class
        cout<<"The type is: "<< type<<endl;
    }



};


void Car::order(){
    cout<<"the number of the car is "<< num<<endl; //declare a member func outside class
}


int main(){
    Car car;
    car.color = "red";
    car.type = "taxi";
    car.num = 1;
    cout<<"First car information"<<endl;
    car.turnOn();
    string bus = "bus";
    string  bus_color = "yellow";
    car.color = bus_color;
    car.type = bus;
    car.num = 2;
    cout <<"Second car information"<<endl;
    car.turnOn();
    car.getColor();
    car.getType();


}