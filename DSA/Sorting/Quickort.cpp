#include<iostream>
#include<vector>
using namespace std;



/* 
In place sorting unline merge sort
Which means no additional arrays are needed while sorting unlike merge sort
Best and average case - choose random or middle pivot --> Time: O n log n, Space: O log n 
worse case: if array is random and choosing min or max value as pivot will increases the recursion depth to n -> Time: O n^2, Spce: O n 

*/
void QuickSortUtil(const vector<int> &arr, int pivot_index, vector<int> &a, vector<int> &b)
{
     int pivot = arr[pivot_index];
    for(int i = 0; i < arr.size(); i++)
    {
        if(i == pivot_index) continue;
        if(arr[i] <= pivot)
            a.push_back(arr[i]);
        else  if(arr[i] > pivot)
            b.push_back(arr[i]);
    }
}

vector<int> QuickSort(const vector<int> &arr, int start, int end)
{
    if(arr.empty()) return {};
    if(start >= end) return {arr[start]};

    int pivot_index = start + (end - start)/2;
    int pivot_value =  arr[pivot_index];
    vector<int> a, b;
    QuickSortUtil(arr,pivot_index , a, b);

    if(a.size()>1)
        a = QuickSort(a, 0 , a.size()-1);
    if(b.size()>1)
        b = QuickSort(b, 0 , b.size()-1);
    a.push_back(pivot_value);
    a.insert(a.end(), b.begin(), b.end());
    return a;
}

int main()
{
    vector<int> arr = {5, 1, 2, 7, 9, 3,3,4, 4,0, 1, 0};

    arr = QuickSort(arr, 0, arr.size() - 1);

    for (int val : arr)
        cout << val << " ";
}
