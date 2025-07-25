#include<iostream>
#include<vector>
#include<array>
using namespace std;


vector<int> merge(vector<int> &a , vector<int> &b)
{
    
    int i = 0;
    int j = 0;
    vector<int> mergeArray;
    while(i < a.size() && j < b.size())
    {
        if(a[i]< b[j]) 
        { 
            mergeArray.push_back(a[i++]);
        }else
        {
            mergeArray.push_back(b[j++]);
        }
    }
    while(i < a.size()) mergeArray.push_back(a[i++]);
    while(j < b.size()) mergeArray.push_back(b[j++]);

    return mergeArray;

}

vector<int> MergeSort(vector<int>& a, int start,  int end)
{
    if(start == end) return {a[start]};

    int divide = start + (end-start) / 2;

    auto x = MergeSort(a, start, divide);
    auto y = MergeSort(a, divide+1,end);
    

    return merge(x,y);

}



int main()
{

   // int arr[] = {5,3,7,8,1,3,5,0};

    vector<int> arr = {5,3,7,8,1,3,5,0};
    auto sorted = MergeSort(arr, 0 , 7);

    for (size_t i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i];
    }
    
}