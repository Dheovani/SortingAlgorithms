#include "BubbleSort.h"
#include <iostream>

using namespace std;

void BubbleSort::sortArray(int arr[], int _size) {
    if (isEmpty(arr, _size)) {
        cout << "Array is empty" << endl;
        return;
    }

    int cont = 0, comps = 0;
    do {
        for (int i = 0; i < _size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr, i, (i + 1));
                comps++;
            }
            comps++;
        }

        cont += 1;
    } while (cont < _size);

    cout << comps;
}
