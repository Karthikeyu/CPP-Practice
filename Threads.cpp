#include <iostream>
#include <thread>   // Include this for std::thread
#include <functional> // Include if using std::ref
#include<mutex>
#include<atomic>
void print1(int* x) {
    std::cout << "Value: " << ++*x << std::endl;
}

void print2(int& x) {
    std::cout << "Value: " << ++x << std::endl;
}


void print3(int x) {
    std::cout << "Value: " << ++x << std::endl;
}


int main() {
    int a = 42;
    int& b = a;
    print1(&a);

    print3(b);
    print2(b);

    std::thread t(print3, a);
    t.join();


    // to preven race condition
    std::mutex mutex;
    mutex.lock();

    // internal code (if thrown error o exception it is never unlocked)
    mutex.unlock();


    // to safe lock mutex 
    std::lock_guard<std::mutex> guard(mutex);

    // 


    


    return 0;
}