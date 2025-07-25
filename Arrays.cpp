#include<iostream>
#include<array>
#include<vector>

using namespace std;



// the pasing value and return is pointer only - here passing of int arr[] is same as int* arr - we can not pass directly the arrray but only pointer to array
int* PasingToArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
       cout << "Inside Function: " << arr[i] << endl;
    }

    return arr;
}

int main()
{

    // basic array
   
    int a[5]; // random values intialized
    int b[5] = {1,2,3}; // 1,2,3,0,0 initalized

    int count_calculated = sizeof(a)/sizeof(a[0]);
   

    // defining size with variable
    const int count = 5;
  
    int c[count] = {1,3,4,5,6};

// a or b are just pointers to memory to the firt element

    for(int i =0; i<5; i++)
    {
        std::cout<<a[i];
    }

    cout<<endl;

    for(int i =0; i<5; i++)
    {
      
        std::cout<<b[i];
    }
    cout<< endl;

    // a or b are just pointers to memory to the firt element

    cout << "Array a address is :" <<  a << endl;

    // accessing an element using pointer 

    cout << "3rd element is " << *(b+2) << endl;

    // Dynamic array - array can be initialized on stack but it should be deleted with delete key word - this is not recpommended unles it is needed
    int cize =5 ;
   // cout <<"enter size: ";
   // cin>> cize;
    int* arr = new int[cize];
    for (size_t i = 0; i < cize; i++)
    {
        arr[i] = 1;
        cout<<arr[i];
    }

    delete[] arr;

    cout<<endl;
    PasingToArray(arr,5);
    
    // other way is to use standard array data structure which is from C++ 11 - with very slight overhead
    // std:: array checks for array bounds for safety unline [] operator array

    std::array<int,5> stdArray = {1,2,3,4,5};

    //std::array<int,cize> stdArray; // can not be intialized with cize variable as std::array needs constant size ar compile time - 
    // if you want to use cize then use vector which can be done at runtime

    for (size_t i = 0; i < stdArray.size(); i++)
    {
        cout << "STD Array elements are " << stdArray[i] << endl;
    }
    

    // dynamic standard array nown as vector

    std::vector<int> vec;
    vec ={1,2,3};

    // adding dynamic element
    vec.push_back(5);
    for (size_t i = 0; i < vec.size(); i++)
    {
       // cout<<std::format("vec[{}] value is : ", i) << vec[i]; // cpp 20 version of format printing
      cout<<vec[i];
        /* code */
    }












}