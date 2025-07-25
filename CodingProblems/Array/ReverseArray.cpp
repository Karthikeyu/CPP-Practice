
#include<iostream>
#include<array>

int* ReverseArray(int arr[])
{
    for(int i = 0; i< 2 ; i++)
    {
        arr[i] = arr[i] + arr[4-i];
        arr[4-i] = arr[i] - arr[4-i];
        
        arr[i] = (arr[i]-arr[4-i]);
      
    }

    return arr;
}

std::array<int,5> ReverseArray(std::array<int,5>& arr)
{
    for(int i = 0; i< 2 ; i++)
    {
        arr[i] = arr[i] + arr[4-i];
        arr[4-i] = arr[i] - arr[4-i];
        
        arr[i] = (arr[i]-arr[4-i]);
        
    }

    return arr;
}


int* ReverseArrayBruteForce(int arr[])
{

    // brute force approach - Time Complexity - O(n)
    static int buffer[5];
    for (size_t i = 0; i < 5; i++)
    {
        /* code */
        buffer[i] = arr[4-i];
    }

    return buffer;
    
}

int main()
{
    int arr[5] ={1,2,3,4,5};
    std::array<int,5> arrr = {1,2,3,4,5};
    arrr = ReverseArray(arrr);

    int* bf = ReverseArrayBruteForce(arr);
    for(int i = 0; i<5; i++)
    {
        std::cout << bf[i] << std::endl;
    }


}



