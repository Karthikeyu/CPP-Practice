#include<iostream>
 #include <chrono>
using namespace std;


int fibonacci(const int& n)
{
    if(n <= 1) return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

constexpr int fibOpti(const int& n)
{
    int a = 0;
    int b = 1;
    int fib = 0;
    for (size_t i = 2; i <= n; i++)
    {
        fib = a+b;
         a = b;
         b = fib;

    }

    return fib;
    
}



int main()
{
   auto start = std::chrono::high_resolution_clock::now();
    constexpr int a = fibOpti(6);
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end - start;
    std::cout << "Duration: " << diff.count() << " s\n";

    cout << fibonacci(6) << endl;
}
