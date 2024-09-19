#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, c, d, t;
    cout << "enter the number of element: " << endl;
    cin >> n;

    cout << "enter the " << n << " number" << endl;
    for (c = 1; c <= n - 1; c++)
    {
        d = c;
        while (d > 0 && arr[d] < arr[d - 1])
        {
            t = arr[d];
            arr[d] = arr[d - 1];
            arr[d - 1] = t;
            d--;
        }
    }
    cout << "sorted list in ascending order is : " << endl;
    for (c = 0; c < n; c++)
    {
        printf("%d\n", arr[c]);
    }
    return 0;
}
