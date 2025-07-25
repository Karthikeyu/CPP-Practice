#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> SumArrays(const vector<int> &a, const vector<int> &b)
{
    vector<int> Sum(a.size());
    
    // 1 2 3 4
    // 9 9 3 9

    int i = a.size()-1;
    int j = b.size()-1;
    int carryBackwardValue = 0;
  //  Sum.reserve(i+j);

    while(i >= 0)
    {
        if(a[i] + b[i]< 10)
        {
            Sum[i] = a[i] + b[i] + carryBackwardValue;
            carryBackwardValue = 0;
            //S.push(a[i] + b[i] + carryBackwardValue)
        }else
        {
            Sum[i] = (a[i] + b[i] + carryBackwardValue) % 10;
            carryBackwardValue = (a[i] + b[i] +  carryBackwardValue)/10;
           
        }

        i--;
    }

      if(carryBackwardValue)
        Sum.insert( Sum.begin(), carryBackwardValue); 
    return Sum;

}




int main()
{
    vector<int> a = {0,0,1};
    vector<int> b = {0,0,9};

    auto sum = SumArrays(a,b);

    for (size_t i = 0; i < sum.size(); i++)
    {
       cout << sum[i];
    }
    

}