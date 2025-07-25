#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    unordered_map<int,int> map = {{1,1},{2,3}};

    cout << map[2];
    for(const auto& pair: map)
    {
        cout << pair.first;
    }
    
}