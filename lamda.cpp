//
// Created by YaNan on 2019/4/15.
//


int main(){

    vector<int> vec{-10,10,-20,20,30};
    const int m=2;


    auto even_print = [m](int a){if(a%m==0)xout <<a<<",";};
    cout << "Even numbers are:";
    for_each(begin(v),end(v),even_print);
    cout<<endl;
    return 0;


}