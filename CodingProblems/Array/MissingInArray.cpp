    
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    
    
    int missingNum(vector<int>& arr) {

        int xor1 = 0;
        int xor2 = 0;
        for (size_t i =1; i <= arr.size()+1; i++)
        {
           xor1 ^= i;
        }

        for(int val : arr)
            xor2 ^= val;

            return xor1 ^ xor2;

        
    }

    int main()
    {
        vector<int> v = {1};

        cout << missingNum(v) << endl;
    }