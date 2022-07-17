#include <iostream>
#include "Sort.cpp"

using namespace std;

class SelectionSort : Sort {

    public:
        /**
         * @brief Organiza o array
         * 
         * @param arr 
         * @param _size 
         */
        void sortArray(int arr[], int _size) {
            if(isEmpty(arr, _size)) {
                cout << "Array is empty" << endl;
                return;
            }

            int small, i, j;
            for(i = 0; i < _size - 1; i ++) {
                small = i;

                for(j = i + 1; j < _size; j ++) {
                    if(arr[small] > arr[j]) {
                        small = j;
                    }
                }

                swap(arr, i, small);
            }
        }

};
