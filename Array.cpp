#include <bits/stdc++.h>
using namespace std;
void Array()
{
    int i, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout << "Your array elements will be: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    Array();
    return 0;
}