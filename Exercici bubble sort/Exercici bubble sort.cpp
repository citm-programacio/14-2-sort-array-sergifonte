#include <iostream>
using namespace std;

const int arraySize = 10;

void mysort(int* unsorted, int*& sorted) 
{
    for (int i = 0; i < arraySize; i++)
    {
        int minIndex = -1;
        for (int j = 0; j < arraySize; j++)
        {
            if (unsorted[j] != 0 && (minIndex == -1 || unsorted[j] < unsorted[minIndex]))
            {
                minIndex = j;
            }
        }

        if (minIndex != -1)
        {
            sorted[i] = unsorted[minIndex];
            unsorted[minIndex] = 0;
        }
    }
}

void printArray(const int* a, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int u[arraySize] = { 0, 8, 1, 2, 4, 5, 5, 9, 20, 15 };
    int* s = new int[arraySize];

    cout << "Original Array: ";
    printArray(u, arraySize);

    mysort(u, s);

    cout << "Sorted Array: ";
    printArray(s, arraySize);

    delete[] s;
}
