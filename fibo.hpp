#include <iostream>
#include <stdlib.h> 
#include "vector"

using namespace std;

int fibo(int n)
{
    if (n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int fibo2(int n, std::vector<int>& res)
{
    if (n > res.size())
    {
        res.push_back(fibo2(n-1, res) + fibo2(n-2, res));
        cout<<"res "<< res.back() << endl;
    }
    return res[n-1];
}

int main()
{
    std::vector<int> res;
    res.push_back(1);
    res.push_back(1);
    
    int a = fibo2(5, res);
    cout<<"Hello World "<< a;

    return 0;
}
