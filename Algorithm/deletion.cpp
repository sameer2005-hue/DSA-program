#include <iostream>
using namespace std;

int main()
{
    int a[100], i, item, pos, n;
    cout << "enter the elements in array: " << endl;
    cin >> n;
    cout << "enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the position of element to be deleted: " << endl;
    cin >> pos;

    for (int i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
        n--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}