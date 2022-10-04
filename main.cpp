#include <iostream>
#include "heapSorting.h"
using namespace std;
void inputData(int *, int);
void showData(int *, int);
int main()
{
    int n, *arr, order;
    cout << "Enter number of the items: ";
    cin >> n;
    arr = new int[n]; // or just: int arr[n] = {...,};
    inputData(arr, n);
    showData(arr, n);
    cout << "Enter (1) for ascending order or (2) for descending order: ";
    cin >> order;
    if (order == 1)
    {
        heapSorting sort(arr, n, sort.ASCENDING_ORDER);
    }
    else if (order == 2)
    {
        heapSorting sort(arr, n, sort.DESCENDING_ORDER);
    }
    else
    {
        cout << "(" << order << ") is NOT valid!\n";
        return -1;
    }
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

