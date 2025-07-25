#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& arr) {
        // code here
        int a = 0;
          int b = 0;
            int c = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 0)
                a++;
            else if(arr[i] ==1)
                b++;
            else if(arr[i] == 2)
                c++;
        }
        
        
        for (int i = 0; i < arr.size(); i++)
        {
            if(i < a)
                arr[i] = 0;
            else if(i >= a && i < b )
                arr[i] =1;
            else 
                arr[i] = 2;
        }
        
    }
    
    

int main()
{

    vector<int> a = {0,2,1,0,1,0,1};

    sort012(a);

}