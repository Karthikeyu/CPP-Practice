#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{

    vector<int> a = {2,1,2,53,4,5,6};

    cout << std::binary_search(a.begin(),a.end(),6);
    



}