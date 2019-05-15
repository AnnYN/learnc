//
// Created by YaNan on 2019/5/15.
//
#include <iostream>
void squares(){
    static  int count  = 1;
    int x = count*count;
    x = count *count;
    std::cout<<count<<"*"<<count;
    std::cout<<":"<<x<<std::endl;
    count++;
}
int main(){
    for (int i =1;i<11;i++)
        squares();
    return 0;



}