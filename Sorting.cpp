#include<iostream>
#include<array>

using namespace std;

int* SortArrayBruteForce(int a[], int count)
{
    

    for(int i = 0; i< count; i++)
    {
        int small = a[i];
        for(int j = i; j< count; j++)
        {
            if(a[j] < small)
            {
                small =  small + a[j];
                a[j] = small - a[j];
                small = small-a[j];
            }
        }

        a[i] = small;
    }
    return a;
}


int main()
{
    int a[] = {4,5,1,3,5,1,2};

    SortArrayBruteForce(a, 6);


    for(int i =0; i < 6 ; i++)
    {
        cout << a[i];
    }
}