#include <iostream>
using namespace std;

int twoAdic(int n)
{
    if (n%2 == 1)
    {
        return 0;
    }
    return 1+twoAdic(n/2);
}

int main()
{
    cout << twoAdic(1) << endl;
    cout << twoAdic(100) << endl;
    cout << twoAdic(34) << endl;
    cout << twoAdic(256) << endl;
    cout << twoAdic(100032) << endl;
    return 0;
}