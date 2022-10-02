#include "heapSorting.h"
#include <math.h>
#include <iostream>
heapSorting::heapSorting(int *arr, int length)
{
    size = length - 1;
    build(arr);
    for (int i = size; i > 0; i--)
    {
        exchange(arr, 0, i);
        size--;
        heapify(arr, 0);
    }
}
void heapSorting::heapify(int *arr, int i)
{
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= size && *(arr + l) > *(arr + i))
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= size && *(arr + r) > *(arr + largest))
    {
        largest = r;
    }
    if (largest != i)
    {
        exchange(arr, i, largest);
        heapify(arr, largest);
    }
}
void heapSorting::build(int *arr)
{
    for (int i = std::ceil(size / 2); i > -1; i--)
    {
        heapify(arr, i);
    }
}
void heapSorting::exchange(int *arr, int a, int b)
{
    int *temp;
    temp = new int;
    *temp = *(arr + a);
    *(arr + a) = *(arr + b);
    *(arr + b) = *temp;
    delete temp;
}
int heapSorting::left(int i)
{
    return (2 * i + 1);
}
int heapSorting::right(int i)
{
    return (2 * i + 2);
}