#include "heapSorting.h"
#include <math.h>
#include <iostream>
heapSorting::heapSorting(int *arr, int length, int order)
{
    size = length - 1;
    if (order == ASCENDING_ORDER)
    {
        build(arr, ASCENDING_ORDER);
        for (int i = size; i > 0; i--)
        {
            exchange(arr, 0, i);
            size--;
            heapify(arr, 0, ascending);
        }
    }
    if (order == DESCENDING_ORDER)
    {
        build(arr, DESCENDING_ORDER);
        for (int i = size; i > 0; i--)
        {
            exchange(arr, 0, i);
            size--;
            heapify(arr, 0, descending);
        }
    }
}
void heapSorting::heapify(int *arr, int i, bool (*compare)(int, int))
{
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= size && (*compare)(*(arr + l), *(arr + i)))
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= size && (*compare)(*(arr + r), *(arr + largest)))
    {
        largest = r;
    }
    if (largest != i)
    {
        exchange(arr, i, largest);
        heapify(arr, largest, (*compare));
    }
}
void heapSorting::build(int *arr, int order)
{
    if (order == ASCENDING_ORDER)
    {
        for (int i = std::ceil(size / 2); i > -1; i--)
        {
            heapify(arr, i, ascending);
        }
    }
    if (order == DESCENDING_ORDER)
    {
        for (int i = std::ceil(size / 2); i > -1; i--)
        {
            heapify(arr, i, descending);
        }
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
bool heapSorting::ascending(int a, int b)
{
    return a > b;
}
bool heapSorting::descending(int a, int b)
{
    return a < b;
}
int heapSorting::left(int i)
{
    return (2 * i + 1);
}
int heapSorting::right(int i)
{
    return (2 * i + 2);
}








