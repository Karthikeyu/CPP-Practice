#include<iostream>

using namespace std;



void InsertionSort(int* a)
{

    for (size_t i = 0; i < 6; i++)
    {
        if(a[i+1] < a[i])
        {
            swap(a[i], a[i+1]);

            int j = i;

            while(j > 0 && a[j] < a[j-1])
            {

                swap(a[j], a[j-1]);
                j--;
            }

            
        }
    }

  
 

}


int main()
{
    int a[] = {5,3,6,1,2,7,1};

  InsertionSort(a);

      for (size_t i = 0; i < 7; i++)
    {
        cout << a[i];
    }

}