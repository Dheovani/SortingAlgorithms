#include <iostream>

using namespace std;

class SelectionSort {

    private:

        /**
         * @brief Swap values in the array's given positions
         * 
         * @param arr 
         * @param root 
         * @param child 
         */
        void swap(int arr[], int root, int child) {
            
            int aux = arr[root];
            arr[root] = arr[child];
            arr[child] = aux;

        }

    public:

        /**
         * @brief Print values inside the array
         * 
         * @param arr 
         * @param _size 
         */
        void printArray(int arr[], int _size) {
            
            int i;
            for (i = 0; i < _size - 1; i ++) {
                cout << i << ": " << arr[i] << ", ";
            }
            cout << i << ": " << arr[i] << endl;
            
        }

        /**
         * @brief Check if array is empty
         * 
         * @param arr 
         * @param _size 
         * @return true 
         * @return false 
         */
        bool isEmpty(int arr[], int _size) {

            for(int i = 0; i < _size; i ++) {
                if(arr[i]) {
                    return false;
                }
            }

            return true;

        }

        /**
         * @brief Sort the array
         * 
         * @param arr 
         * @param _size 
         */
        void sort(int arr[], int _size) {

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

int main() {

    int i, _size, arr[10];
    SelectionSort* selectionSort = new SelectionSort();
    _size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < _size; i ++) {
        arr[i] = (rand() % 100) + 1;
    }

    selectionSort->sort(arr, _size);
    selectionSort->printArray(arr, _size);

    return 0;

}
