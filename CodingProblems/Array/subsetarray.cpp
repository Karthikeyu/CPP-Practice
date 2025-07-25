#include<iostream>
#include<array>

using namespace std;


bool FindIfSubsetArrayPresent(int* a, int* b)
{
    
    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        bool elementFound = false;
        for (size_t j = 0; j < 5; j++)
        {
           if(b[i] == a[j])
           {
            elementFound = true;
            break;
          
           }

        }

        if(!elementFound)
            return false;
        
    }

    return true;
}


int main()
{
    int a[] = {1,2,3,4,5};
    int s[] = {1,2,3};

  cout <<  FindIfSubsetArrayPresent(a,s) << endl;
    
}