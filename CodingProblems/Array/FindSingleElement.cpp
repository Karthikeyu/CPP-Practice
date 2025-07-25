    
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    
    
    int FindSingle(vector<int>& arr) {

        int xor1 = 0;
      

        for(int val : arr)
            xor1 ^= val;

            return xor1;

        
    }

    int main()
    {
        vector<int> v = {1,1,2,2,4,5,4};

        cout << FindSingle(v) << endl;
    }