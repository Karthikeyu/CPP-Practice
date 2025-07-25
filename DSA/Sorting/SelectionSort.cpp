#include<iostream>
#include<vector>
using namespace std;

/*
Selection Sort - O(n^^2)

*/


void SelecitonSort(vector<int> &arr)
{
    for (size_t i = 0; i < arr.size()-1; i++)
    {
        for (size_t j = i+1; j < arr.size(); j++)
        {
            if(arr[j] < arr[i])
                swap(arr[j], arr[i]);
        }
        
    }
    
}


int main()
{
    vector<int> arr = {1,5,4,1,0,7,9,3};

    SelecitonSort(arr);

    for (size_t i = 0; i < arr.size(); i++)
    {
       cout << arr[i] << endl;
    }
    
}