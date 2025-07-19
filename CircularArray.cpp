#include <iostream>
using namespace std;

template <typename T>

class CircularArray
{
    private:
        T arr[100];
        int front;
        int rear;
        int size;
    public:
        CircularArray()
        {
            front = 0;
            rear = 1;
            size = 0;
        }
};

int main()
{
    // code;
    return 0;
}