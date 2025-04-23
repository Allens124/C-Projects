#include <iostream>
using namespace std;

int pAdic(int n, int p)
{
    if (n%p != 0)
    {
        return 0;
    }
    return 1+pAdic(n/p, p);
}

int main()
{
    //code;
    return 0;
}