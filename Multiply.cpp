#include<iostream>

int Multiply(int a , int b)
{
    return a* b;
}


struct city
{
    int a;
    int b = 5;
};

void IncrementByValue(int value)
{
    value++;
}

void IncrementByReference(int& value)
{
    value++;
}
int main()
{

    int a = 10;
    int b = 20;


    // pointers

    int* ptr = &a; // pointer is always an integer that stores an address of any type of varaible
    *ptr = 20; // changing value of a 
    std::cout << ptr << std::endl; // prints address
    std::cout<< *ptr << std::endl; // print value fetched from stored address
    //std::cout << ptr++ << std::endl; // prints incremented address

   
    // references - reference is nothing but alias to a variable (it is not an address)

   int& ref = a;
   ref = 35;
   std::cout << "Reference value is " << *ptr <<std::endl;

   // can be useful mainly for pass by reference where we want to modify the a variable declared out side function

   IncrementByValue(a);
   std::cout << "a value is by pass by value" << a <<std::endl;

   // pass by reference
   IncrementByReference(ref);
   std::cout<< "a value using pass by reference" << a << std::endl;
   std::cout<< "a value using pass by reference" << ref << std::endl;




    
}