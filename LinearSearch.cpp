#include <bits/stdc++.h>
using namespace std;
// template <typename A>
void Linearsearch()
{
    int i, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int flag=0;
    int target;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout << "Enter the value you wanna search in array: ";
    cin >> target;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            cout << "Value found at " << i << " index" << endl;
            break;
        }
        if (flag == 0)
        {

            cout << "Value not found" << endl;
            break;
        }
    }
}
int main()
{
    Linearsearch();
    return 0;
}