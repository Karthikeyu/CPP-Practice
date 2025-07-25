#include <iostream>
#include <memory>
using namespace std;

class B; // Forward declaration

class A {
public:
    shared_ptr<B> b_ptr;
    A() { cout << "A created\n"; }
    ~A() { cout << "A destroyed\n"; }
};

class B {
public:
  //  shared_ptr<A> a_ptr; 
    weak_ptr<A> a_ptr; // use weak pointer to fix the problem

    B() { cout << "B created\n"; }
    ~B() { cout << "B destroyed\n"; }
};



int main() {
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();


    a->b_ptr = b;
    b->a_ptr = a; // Circular reference

    return 0;
}