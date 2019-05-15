//
// Created by YaNan on 2019/5/12.
//

//#include <iostream>
//#include <string>
//#include <thread>
//
//void threadCallback(int x, std::string str)
//{ std::cout<<"Passed Number = "<< x<<std::endl;
//std::cout<<"Passed String = "<<str<<std::endl;
//
//}
//int main(){
//    int x = 10;
//    std::string str = "Sample String";
//    std::thread threadObj(threadCallback,x,str);
//    threadObj.join();
//    return 0;
//}


#include <thread>

void threadCallback(int x, std::string str){
    std::cout<<"passed number"<<x<<std::endl;
    std::cout<<"passed str"<<str<<std::endl;
}
int main(){
    int x =10;
    std::string str ="sample str";
    std::thread  threadObj(threadCallback,x,str);
    threadObj.join();
    return 0;
}