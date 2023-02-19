#include "Sort.h"
#include <iostream>

using namespace std;

void Sort::swap(int arr[], int root, int child) {
    int aux = arr[root];
    arr[root] = arr[child];
    arr[child] = aux;
}

void Sort::printArray(int arr[], int _size) {
    int i;

    for (i = 0; i < _size - 1; i++) {
        cout << arr[i] << ", ";
    }

    cout << arr[i] << endl;
}

bool Sort::isEmpty(int arr[], int _size) {
    for (int i = 0; i < _size; i++) {
        if (arr[i]) {
            return false;
        }
    }

    return true;
}
