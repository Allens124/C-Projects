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
    //code;
    return 0;
}