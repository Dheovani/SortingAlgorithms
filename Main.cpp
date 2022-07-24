#include <iostream>

using namespace std;

int *bestCase(int _size) {
    int *arr = new int[_size];
    for(int i = 0; i < _size; i ++) {
        arr[i] = i;
    }
    return arr;
}

int *mediumCase(int _size) {
    int *arr = new int[_size];
    for(int i = 0; i < _size; i ++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int *worstCase(int _size) {
    int *arr = new int[_size];
    for(int i = 0; i < _size; i ++) {
        arr[i] = _size - i;
    }
    return arr;
}
