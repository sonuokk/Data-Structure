#include <bits/stdc++.h>
using namespace std;
template <class t>
void insertion(t size, t arr[])
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
template <class t>
void bubble(t size, t arr[])
{
    int i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}
template<class t>
void selection(t size, t arr[]){
    for(int i=0;i<size-1;i++){
        for(int j=i+1; j<size;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

}
// template<class t>
// void merging(int l, int mid, int r, int arr[])
// {

//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     // creating temp arrays to store elements

//     int a[n1];
//     int b[n2];
//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }
//     for (int j = 0; j < n2; j++)
//     {
//         b[j] = arr[mid + 1 + j];
//     }
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = arr[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {

//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }
// // template<class t>
// void merge(int l, int r, int arr)
// {
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         merge(l, mid, arr);
//         merge(mid + 1, r, arr);
//         merging(l, mid, r, arr);
//     }
// }
template <class t>
void show(t size, t arr[])
{
    int i;
    cout << "\tArray elements after sorting are: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int l, r, mid;
    int i, size, choice;
    cout << "\tEnter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "\tEnter the elements of array : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\tYour array elements are: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\tChoose any one of sorting algorithms to sort your data" << endl;
    cout << "\t\t1.Insertion Sort" << endl;
    cout << "\t\t2.Selection Sort" << endl;
    cout << "\t\t3.Bubble Sort" << endl;
    cout << "\t\t4.Merge Sort" << endl;
    cout << "\t\t5.Quick Sort" << endl
         << endl;
    cout << "\t\tEnter your choice : " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        insertion(size, arr);
        show(size, arr);
        break;

    case 2:
        selection(size,arr);
        show(size,arr);
        break;

    case 3:
        bubble(size, arr);
        show(size, arr);
        break;

    case 4:
        // merge(l, r, arr);
        // show(size, arr);
        cout<<"Temp unavailable";
        break;

    case 5:

        break;

    default:
        cout << "Wrong choice buddy..." << endl;
        break;
    }
    return 0;
}