#include<iostream>
#include<string>
using namespace std;
/* 



*/


void DecimalToBinary(int a, string& result)
{

    // one more edge case

    if(a == 0 && result.empty())
    {
        result = "0";
        return;
    }

    if(a == 0) return;

    result = std::to_string(a%2) + result;

    return DecimalToBinary(a/2, result);

}



int main()
{
    int decimal = 02;
    string result;
    DecimalToBinary(decimal, result);
    std::cout << result << std::endl;

}