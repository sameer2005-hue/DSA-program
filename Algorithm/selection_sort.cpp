#include <iostream>
using namespace std;

void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int selectionsort(int a[], int n)
{
    int imin;
    for (int i = 0; i < n - 1; i++)
    {
        imin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[imin])
            {
                imin = j;
            }
        }
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;

    selectionsort(a, n);
    printarray(a, n);
    return 0;
}