#include <iostream>

using namespace std;

int main()
{
    int i, j, side;
    cout << "Enter side length: ";
    cin >> side;
    for (i = 0; i < side; i++)
    {
        for (j = 0; j < side; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}