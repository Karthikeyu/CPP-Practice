#include<iostream>
#include<string>
using namespace std;
class Animal
{
    private:
    string m_Name;
    public:

    // constructor with out member initialization for demostraion purpose
    Animal()
    {
        cout << "Animal name is Unknown" << endl;
        
    }

    // Constructer with member Initialization
    Animal(const string& Name) 
    : m_Name(Name)
    {
        cout<< "Animal name is " << m_Name << endl;
    }

};

int main()
{
    // declaring a new class object - which calls default constructor automatically
    Animal anim; 
    string name = "Panda";

    // assigning new object which calls default constructor with parameter
    anim = Animal(name);

    // the best way - this calls the required constructer only with the initialization
    Animal anim2(name);

}

// the point is use member intialization - otherwise there is a chance that we make two objects like 29th and 33rd line