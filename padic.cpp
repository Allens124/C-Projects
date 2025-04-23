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
    cout << pAdic(100, 2) << endl;
    cout << pAdic(100, 3) << endl;
    cout << pAdic(100, 5) << endl;
    cout << pAdic(714, 2) << endl;
    cout << pAdic(714, 3) << endl;
    cout << pAdic(714, 7) << endl;
    return 0;
}