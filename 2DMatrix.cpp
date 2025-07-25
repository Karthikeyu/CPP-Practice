#include<iostream>
#include<vector>
using namespace std;



auto MultiplyMatrix(vector<vector<int>>& vec1, vector<vector<int>>& vec2)
{
    if(vec1[0].size() != vec2.size())
    {
        throw("Matrix multiplication is not possible");
    }

    vector<vector<int>> vec;
    for (size_t i = 0; i < vec1.size(); i++)
    {
        vector<int> vecRow;
       
        for (size_t j = 0; j < vec1[0].size(); j++)
        {
             int value = 0;
            for (size_t k = 0; k < vec1[0].size(); k++)
            {
                value += vec1[i][k]* vec2[k][j];
            }
            vecRow.emplace_back(value);
            
        }
        vec.emplace_back(vecRow);
    }


    return vec;
    
}

void FillMatrix(vector<vector<int>>& vec, const int& n,const int& m)
{
 for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            vec[i][j] = (std::rand());

        }
    }
}

int main()
{

    size_t n = 2;
    size_t m = 2;
    vector<vector<int>> vec1(m, vector<int>(n,0));
    vector<vector<int>> vec2(m, vector<int>(n,0));

   

    FillMatrix(vec1, n , m);
    FillMatrix(vec2,n , m);   

}