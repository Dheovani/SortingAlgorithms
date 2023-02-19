#include "InsertionSort.h"
#include <iostream>

using namespace std;

void InsertionSort::sortArray(int arr[], int _size) {
    if (isEmpty(arr, _size)) {
        cout << "Array is empty" << endl;
        return;
    }

    int cont, aux, i;
    for (i = 0; i < _size; i++) {
        cont = 1;
        aux = 0;

        // Troca apernas quando i != 0 e o valor anterior for maior
        if (i != 0) {
            while (i >= cont && arr[i - cont] > arr[i - aux]) {
                printArray(arr, _size);
                swap(arr, (i - aux), (i - cont));
                cont++;
                aux++;
            }
        }
    }
}
