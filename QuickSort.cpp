#include "QuickSort.h"
#include <iostream>

using namespace std;

int QuickSort::partition(int arr[], int start, int end) {
    int i = start - 1, pivot = arr[end - 1];
    for (int j = start; j < end - 1; j++) {
        if (arr[j] <= pivot) {
            i += 1;
            swap(arr, j, i);
        }
    }

    swap(arr, i + 1, end - 1);
    printArray(arr, end);
    return i + 1;
}

void QuickSort::quickSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int pi = partition(arr, start, end);
    quickSort(arr, start, pi);
    quickSort(arr, pi + 1, end);
}

void QuickSort::sortArray(int arr[], int _size) {
    if (isEmpty(arr, _size)) {
        cout << "Array is empty" << endl;
        return;
    }

    quickSort(arr, 0, _size);
}
