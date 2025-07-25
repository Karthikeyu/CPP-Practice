
#include<iostream>

int main()  // start function that c++ compiler looks to start program (Entry point)
{
    std::cout<<"Hello World"<<std::endl; // endl -> Flushes the out buffer
    std::cout<<"Next line" << "\n"; // "\n" -> Better in performance wise
    std::cout<<"Next next line";

    return 0; // returning 0 means program ended with out any errors. 1 -> errors are present
}

