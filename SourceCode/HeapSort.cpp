#include "HeapSort.h"
#include <iostream>

using namespace std;

void HeapSort::heapify(int arr[], int root, int _size) {
    if (isEmpty(arr, _size)) {
        cout << "Array is empty" << endl;
        return;
    }

    int max = root;
    int lchild = (root * 2) + 1;
    int rchild = (root * 2) + 2;

    // Seleciona os maiores valores nas determiandas posições
    max = ((lchild < _size) && (arr[lchild] > arr[max])) ? lchild : max;
    max = ((rchild < _size) && (arr[rchild] > arr[max])) ? rchild : max;

    if (max != root) {
        swap(arr, root, max);
        heapify(arr, max, _size);
    }
}

void HeapSort::sortArray(int arr[], int _size) {
    int i;
    // Criar o heap nos elementos que não constituem as "folhas"
    for (i = (_size / 2) - 1; i >= 0; i--) {
        heapify(arr, i, _size);
    }

    // Organizar o array a partir do fim
    for (i = _size - 1; i > 0; i--) {
        swap(arr, 0, i);
        heapify(arr, 0, i);
    }
}
