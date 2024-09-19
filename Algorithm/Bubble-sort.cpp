#include <iostream>
using namespace std;

int main()
{
    int i, n, j, a[20], temp;
    cout << "enter th e value of n: " << endl;
    cin >> n;
    cout << "enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "after bubble sort element  are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" "<<endl;
    }
    return 0;
}