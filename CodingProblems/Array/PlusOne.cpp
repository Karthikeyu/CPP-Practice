#include<iostream>
#include<vector>
using namespace std;


vector<int> plusOne(vector<int>& digits) 
    {
       
        int i = -1;
        int j = digits.size()-1;
        // 9 , 9 , 9
        while(j >=0)
            {
                if(digits[j] ==9)
                {
                    i = j;
                    --j;
                }else
                    break;
                   
            }

        if(i == -1)
        {
            ++digits[digits.size()-1];
            return digits;
        }
        if(i==0)
        {
            digits[i] = 1;
            ++i;
            digits.push_back(0);
        }else
        {
            ++digits[i-1];
        }

        while(i < digits.size())
        {
            digits[i] = 0;
            ++i;
        }
    
       

        return digits;
        
    }

    int main()
    {
        vector<int> v = {9};
        plusOne(v);
        for (size_t i = 0; i < v.size(); i++)
        {
           cout << v[i];
        }
        
    }