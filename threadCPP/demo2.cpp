//
// Created by YaNan on 2019/5/11.
//

//joining  threads with std::thread::join
#include <iostream>
#include <thread>
#include <algorithm>
class WorkerThread
{
public:
    void operator()()
    {
        std::cout<<"Worker Thread "<<std::this_thread::get_id()<<" is Executing"<<std::endl;
    }
};
int main()
{
    std::vector<std::thread> threadList;
    for(int i = 0; i < 10; i++)
    {
        threadList.push_back( std::thread( WorkerThread() ) );
    }
    // Now wait for all the worker thread to finish i.e.
    // Call join() function on each of the std::thread object
    std::cout<<"wait for all the worker thread to finish"<<std::endl;
    std::for_each(threadList.begin(),threadList.end(), std::mem_fn(&std::thread::join));
    std::cout<<"Exiting from Main Thread"<<std::endl;
    return 0;
}
//#include <thread>
//#include <algorithm>
//
//class WorkerThread
//{
//public:
//    void operator()()
//    {
//        std::cout<<"worker threa"<<std::this_thread::get_id()<<" is Executing"<<std::endl;
//    }
//};
//int main(){
//    std::vector<std::thread> threadlist;
//    for(int i =0; i<10;i++)
//    {
//        threadlist.push_back(std::thread(WorkerThread()));
//
//
//        //now wait for all the worker thread to finish i.e
//        //call join() function on each of the std::thread object
//        std::cout<<"wait for all the workde thread to finish"<< std::endl;
//        std::for_each(threadlist.begin(),threadlist.end(),std::mem_fn(&std::thread::join));
//        std::cout<"Exiting form Main Thread"<<std::endl;
//
//    }
//
//
//
//
//}








