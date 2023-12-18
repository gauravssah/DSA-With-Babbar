#include <iostream>
using namespace std;

int main()
{

    int arraySize = 10;

    int *myArray = new int[arraySize];

    // int siz = sizeof(myArray) / sizeof(int);

    cout << "Before : " << arraySize << endl;

    // Get value in array.
    for (int i = 0; i < arraySize; i++)
    {
        cin >> myArray[i];
    }
    cout << "After : " << arraySize << endl;

    // Display value in array.
    for (int i = 0; i < arraySize; i++)
    {
        cout << myArray[i] << endl;
    }
}