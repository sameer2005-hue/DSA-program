#include <iostream>
using namespace std;
int main()
{
    int n, arr[100], item, low, high, mid;
    cout << "enter the no of element: " << endl;
    cin >> n;
    cout << "enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    cout << "enter the no to be find: " << endl;
    cin >> item;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else if (arr[mid] == item)
        {
            cout << item << " found at location " << mid + 1 << endl;
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        cout << "Not found!" << item;
    return 0;
}
