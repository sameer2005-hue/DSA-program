#include <iostream>
using namespace std;

int main()
{
    int a[10], pos, i, n, item;
    cout << "enter number of elements of array: " << endl;
    cin >> n;
    cout << "enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter position of element to be inserted: " << endl;
    cin >> pos;
    cout << "enter value of element to be inserted" << endl;
    cin >> item;
    while (i >= pos)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[pos] = item;
    n++;
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}
