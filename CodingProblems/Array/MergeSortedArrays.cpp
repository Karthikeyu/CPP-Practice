#include<iostream>
#include<vector>

using namespace std;


  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = 0;
        int j = 0;
        vector<int> nums;
        while (i < m && j < n)
        {   
            if(nums1[i] < nums2[j])
            {
                nums.push_back(nums1[i++]);
              
            }else
            {
            nums.push_back(nums2[j++]);
            }
            
        }

        while(i < m) nums.push_back(nums1[i++]);
        while(j < n) nums.push_back(nums2[j++]);

        nums1.clear();

        for(int i = 0; i<nums.size(); i++)
        {
            nums1.push_back(nums[i]);
        }
        
    }

    int main()
    {
         vector<int> m = {9,0,0};
         vector<int> n = {1,2};
        merge(m,1, n,   2);
        for (size_t i = 0; i < m.size(); i++)
        {
           cout << m[i];
        }
    }