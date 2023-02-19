#include "MergeSort.h"
#include <iostream>

using namespace std;

void MergeSort::merge(int arr[], const int start, const int half, const int end) {
    int leftSize = (half - start + 1);
    int rightSize = end - half;

    // Criar os arrays
    int* leftArr = new int[leftSize];
    int* rightArr = new int[rightSize];

    for (int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[start + i];
    }

    for (int j = 0; j < rightSize; j++) {
        rightArr[j] = arr[half + 1 + j];
    }

    // Unir os arrays
    int cont = start, lAux = 0, rAux = 0;
    while (lAux < leftSize && rAux < rightSize) {
        if (leftArr[lAux] <= rightArr[rAux]) {
            arr[cont] = leftArr[lAux];
            lAux++;
        } else {
            arr[cont] = rightArr[rAux];
            rAux++;
        }

        cont++;
    }

    // Lidar com os valores restantes
    while (lAux < leftSize) {
        arr[cont] = leftArr[lAux];
        lAux++;
        cont++;
    }

    while (rAux < rightSize) {
        arr[cont] = rightArr[rAux];
        rAux++;
        cont++;
    }

    // Apagar arrays locais
    delete[] leftArr;
    leftArr = NULL;

    delete[] rightArr;
    rightArr = NULL;
}

void MergeSort::mergeSort(int arr[], int const start, int const end) {
    if (start >= end) {
        return;
    }

    int half = start + (end - start) / 2;
    mergeSort(arr, start, half);
    mergeSort(arr, half + 1, end);
    merge(arr, start, half, end);
}

void MergeSort::sortArray(int arr[], int _size) {
    if (isEmpty(arr, _size)) {
        cout << "Array is empty" << endl;
        return;
    }

    mergeSort(arr, 0, _size - 1);
}
