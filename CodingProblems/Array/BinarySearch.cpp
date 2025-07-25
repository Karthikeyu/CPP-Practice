#include<iostream>

using namespace std;


int BinarySearch(int* arr, const int value, int firstIndex, int lastIndex)
{
    if(firstIndex == lastIndex)
    {
        if(arr[firstIndex] == value)
            return firstIndex;
        else
            return -1;
    }

    int mid = firstIndex + (lastIndex-firstIndex)/2;
    if(value == arr[mid]) return mid;
    if(value <  arr[mid])
        return BinarySearch(arr, value, firstIndex, mid-1);
    if(value > arr[mid])
        return BinarySearch(arr, value, mid+1, lastIndex);
}


int main()
{
    int a[] = {0,1,2,3,4,5,9,10};
    int& findvalue = a[7];
    cout << "Element " << findvalue <<" is found at index " << BinarySearch(a, findvalue, 0 ,7) << endl;
}