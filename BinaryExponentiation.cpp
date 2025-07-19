#include <iostream>
using namespace std;

unsigned long long binaryExp(unsigned long long base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    unsigned long long x = binaryExp(base, exp/2);
    if (exp%2 == 0)
    {
        return x*x;
    }
    return base*x*x;
}

int main()
{
    cout << binaryExp(2, 50) << endl;
    cout << binaryExp(3, 20) << endl;
    cout << binaryExp(5, 10) << endl;
    return 0;
}