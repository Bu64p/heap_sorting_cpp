#include <iostream>
#include "heapSorting.h"
using namespace std;
void inputData(int *, int);
void showData(int *, int);
int main()
{
    int n, *arr;
    cout << "Enter number of the items: ";
    cin >> n;
    arr = new int[n];
    inputData(arr, n);
    showData(arr, n);
    heapSorting sort(arr, n);
    showData(arr, n);
    cin.ignore();
    return 0;
}
void inputData(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (i + 1) << ". ";
        cin >> *(arr + i);
    }
}
void showData(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "   ";
    }
    cout << endl;
}