#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "Enter the height of the triangle : " << endl;
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (height - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}