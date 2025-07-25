#include<iostream>
using namespace std;
 int greet() { std::cout << "Hello from function pointer"; }
int main()
{
    int a = 5;

    // constant value can not be modified through out the execution
    const int MAX_AGE = 20;
 
    // pointer to an int
    int* ptr = &a;
    *ptr = 30;
    a = 20;
    cout  << *ptr << endl;

    // pointer to constant int (means the value can not be modified using pointer) - TRICK: READ SYNAX FROM LEFT TO RIGHT

    const int* ptr2 = &a;
    //*a = 20; // not possible as it is pointing to constant value based on declaation

    // pointer to constant int
    int const* ptr3 = &a; // this is same as above 
    //*a = 20; // not possible as ptr3 is pointing to constant int

    // constant pointer to int (means pointer can not be assined to other variable)
    int* const ptr4 = &a;
    *ptr4 = 25; // posible
    //ptr4 = &MAX_AGE; // not possible

    // means both pointer and pointing values are constant
    const int* const ptr5 = &a;

    //*ptr5 = 25; // Not possible
    //ptr5 = &MAX_AGE; // not possible

    cout << a << endl;

 // function pointer      
int (*my_func)() = greet;
my_func(); // Hello



}

class Entity
{

private:
    string m_Name;

    // can be modified inside const functions
    mutable int m_DebugCount;
public:
// CONST MEHOD - This method is declared as const - so no write of variables is allowed inside method
    string GetName() const
    {
        //m_Name = "Busa"; // can not do it as it is const menthod
        m_DebugCount++; // possible as it is mutable
        cout <<"This method i declared as const - so no write of variables is allowed inside method" <<endl;
        return m_Name;
    }


};

/*
You have to read it backward, like the compiler does. For instance : 

-const int * A; ==> "A is a pointer to an int that is constant."
(or, depending on how you prefer to write it)
int const* A; ==> "A is a pointer to a const int"
but both are the same as explained in the video.

-int * const A; ==> "A is a const pointer to an int."
-const int* const A; ==> "A is a const pointer to an int that is constant".

EDIT : 
const int * A does not mean that A actually points to a const variable. It just means that the compiler will not allow you to modify the pointed value through A.

for instance : 
int val = 10;
int const * a = &val;
*a = 30; //this will NOT compile, you're not allowed to modify "val" through "a".
val = 30; //this will compile. 

Same with : 

int val = 10;
int val2 = 30;
const int * const A = &val; 

A = &val2; //will NOT compile : you can't modify what A points to.
*A = 30; //will NOT compile : you can't modify val through A

val = 30; //this will compile, val is not constant


*/