#include<iostream>


class Geometry
{

    
    public:
    // pure virtual function that eeds to be implemented by child classes - if not impemented then the child class can not be instantiated as it is considered as abstract class
    virtual void GetName() = 0;
};

class Square : public Geometry
{
    public:
    void GetName() override
    {
        std::cout << "This is Square"<<std::endl;
       
    }
};

int main()
{
    
    Square* s = new Square();
    s->GetName();
}