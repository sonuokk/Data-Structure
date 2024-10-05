#include <bits/stdc++.h>
using namespace std;
void Binarysearch(int n, int low, int high, int mid, int num, int arr[])
{
    int i = 0;
    low = i;
    high = n - 1;
    mid = (low = high) / 2;
    while (low <= high)
    {
        if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else if (arr[mid] == num)
        {
            cout << "Element " << num << " found at position " << mid + 1 << endl;
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        cout << "\nThe number, " << num << " is not found in given list." << endl;
    }
}

int main()
{
    int i = 0;
    int n, num, low, high, mid;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout << "\nEnter the element youu wanna search in the list: ";
    cin >> num;
    Binarysearch(n, low, high, mid, num, arr);
    return 0;
}