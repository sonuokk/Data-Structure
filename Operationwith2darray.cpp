#include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <class t>
void addition(t row, t col, t A[10][10], t B[10][10], t C[10][10])
{
    int i, j;
    cout << "Enter the elements of B[][]: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "The Array B[][] is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "The C[][] of array A[][] and B[][] after addition will be " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
template <class t>
void subtraction(t row, t col, t A[10][10], t B[10][10], t C[10][10])
{
    int i, j;
    cout << "Enter the elements of B[][]: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "The Array B[][] is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "The C[][] of array A[][] and B[][] after subtraction will be " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
template <class t>
void transpose(t row, t col, t A[10][10], t Transpose[10][10])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            Transpose[j][i] = A[i][j];
        }
    }
    cout << "Array after applying Transpose will be " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int i, j, num, choice;
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int Transpose[10][10];

    int row, col;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of columns: " << endl;
    cin >> col;

    cout << "Enter the elements of A[][]: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "The Array A[][] is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\t1. Addition" << endl;
    cout << "\t2. Subtraction" << endl;
    cout << "\t3. Transpose" << endl;
    cout << "\t4. Multiplication" << endl;
    cout << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        addition(row, col, A, B, C);
        break;

    case 2:
        subtraction(row, col, A, B, C);
        break;

    case 3:
        transpose(row, col, A, Transpose);
        break;

    case 4:
        cout << "It'll be added soon..." << endl;
        break;

    default:
        cout << "Wrong choice buddy!!" << endl;
        break;
    }

    return 0;
}