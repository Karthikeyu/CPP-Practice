#include <iostream>

class vehicle
{

public:
    char*  Name;
    int ModelNum = 2025;

    virtual void vehicle(){};

    virtual void AddFuel()
    {
        std::cout<< "Base class fueling" << std::endl;
    }
};

class Car : public vehicle
{
public:

    void AddFuel() override
    {
        std::cout << "Car is fueling" << std::endl;
    }

};

int main()
{
    // base class
    vehicle* v = new vehicle();
    v->AddFuel();

    Car* Mycar = new Car();
    Mycar->AddFuel();

    vehicle* n = Mycar;
    n->AddFuel();
}