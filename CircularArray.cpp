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
        void addFront(T data)
        {
            if (size == 100)
            {
                cout << "Array is full." << endl;
                return;
            }
            arr[front] = data;
            front--;
            if (front == -1)
            {
                front = 99;
            }
            size++;
        }
};

int main()
{
    // code;
    return 0;
}