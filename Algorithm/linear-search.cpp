#include <iostream>
using namespace std;

int main()
{
    int a[100], i, n, search;
    cout << "enter value of n: " << endl;
    cin >> n;
    cout << "enter element in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter numbe to search: " << endl;
    cin >> search;
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            cout << search << " is present at location " << i + 1 << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << search << " is not present in array" << endl;
    }
    return 0;
}
