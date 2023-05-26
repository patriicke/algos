#include <iostream>

using namespace std;

class Stack
{
    int *arr;
    int capacity;
    int nextIndex;

public:
    Stack()
    {
        capacity = 4;
        nextIndex = 0;
        arr = new int[capacity];
    };

    int size() { return nextIndex; }

    bool isEmpty()
    {
        return (nextIndex == 0);
    }

    bool isFull()
    {
        return (nextIndex == capacity);
    }

    void push(int element)
    {
        if (isFull())
        {
            int *newArray = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArray[i] = element;
            }
            delete[] arr;
            arr = newArray;
            capacity *= 2;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return;
        }
        nextIndex--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[nextIndex - 1];
    }
};

int main()
{
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    cout << stack.size() << endl;

    return 0;
}