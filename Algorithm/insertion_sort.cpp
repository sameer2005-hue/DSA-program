#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertsort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i <= size-1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int size = 6;

    insertsort(arr, size);
    printarray(arr, size);
    return 0;
}