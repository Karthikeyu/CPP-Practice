#include<iostream>

class Test
{

    // static inside class with out declaration
    // static variable - it will be shared among all the instances of this class
    static int x;

    // normal variable
    int y;

 

    static void staticmethod(int a)
    {
        x = 10;
        x += 20;

        std::cout<< "Static variable x is : " << x << std::endl;
        std::cout<< "Static variable z is : " << z << std::endl;
      
       /* not possible to access y because 
       static methods does not have reference to class object. So class members are not accessible. */
        // std::cout<< "Static variable x is : " << y << std::endl; 

    }
 public:
    // static with initialization - should be used as const
    static const int z = 5;
    void Normalmethod()
    {
      
        // normal method can access static variable but when this method is called from out side, static variables need to be defined explicitly
        x = 10;
       std::cout<<"Calling from normal method: " << x << std::endl;
       // call static method

       staticmethod(x);

    }

};

// define x otherwise throws error
int Test::x = 0;

int main()
{
    Test t;
    t.Normalmethod(); 

    // accessing static z as it is public variable
    int x = Test::z;
}