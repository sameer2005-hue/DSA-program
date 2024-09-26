#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int size, int element)
{
    int low=0, mid, high=size-1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }else
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 45, 67, 89, 90};
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    int search1 = linearsearch(arr, size, element);
    cout << "the element " << element << " found at the index " << search1 << endl;

    int arr[] = {1, 22, 34, 45, 76, 87, 98, 145, 267, 289, 940};
    int size = sizeof(arr) / sizeof(int);
    int element = 145;
    int search = binarysearch(arr, size, element);
    cout << "the element " << element << " found at the index " << search << endl;
    return 0;
}
