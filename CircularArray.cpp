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
        void addRear(T data)
        {
            if (size == 100)
            {
                cout << "Array is full." << endl;
                return;
            }
            arr[rear] = data;
            rear++;
            if (rear == 100)
            {
                rear = 0;
            }
            size++;
        }
        T removeFront()
        {
            if (size == 0)
            {
                cout << "Array is empty. Default return." << endl;
                return arr[0];
            }
            front++;
            if (front == 100)
            {
                front = 0;
            }
            size--;
            return arr[front];
        }
        T removeRear()
        {
            if (size == 0)
            {
                cout << "Array is empty. Default return." << endl;
                return arr[0];
            }
            rear--;
            if (rear == -1)
            {
                rear = 99;
            }
            size--;
            return arr[rear];
        }
        int getSize()
        {
            return size;
        }
        bool isEmpty()
        {
            return size == 0;
        }
};

int main()
{
    CircularArray<int> arr = CircularArray<int>();
    arr.addFront(1);
    arr.addRear(10);
    arr.addRear(5);
    arr.addFront(3);
    while (!arr.isEmpty())
    {
        cout << arr.removeFront() << endl;
    }
    cout << arr.removeFront() << endl;
    return 0;
}