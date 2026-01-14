#include <bits/stdc++.h>

using namespace std;

class CircularQueue
{
    int *arr;
    int currSize, capacity;
    int f = 0, r = -1;

public:
    CircularQueue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) // O(1)
    {
        if (currSize == capacity)
        {
            cout << "Capacity is full!\n";
            return;
        }

        r = (r + 1) % capacity;

        arr[r] = data;
        currSize++;
    }

    void pop() // O(1)
    {
        if (empty())
        {
            cout << "CQ is empty";
            return;
        }

        f = (f + 1) % capacity;
        currSize--;
    }

    int front() // O(1)
    {
        if (empty())
        {
            cout << "CQ is empty\n";
            return -1;
        }

        return arr[f];
    }

    bool empty() // O(1)
    {
        return currSize == 0;
    }

    // void print()
    // {
    //     for (int i = 0; i < capacity; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
};

int main()
{

    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);

    cq.pop();
    cq.push(4);

    // cq.print();
    while (!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }

    return 0;
}
