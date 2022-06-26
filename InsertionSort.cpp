#include <iostream>

using namespace std;

class InsertionSort {

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

            if(isEmpty(arr, _size)) {
                cout << "Array is empty" << endl;
                return;
            }
            
            int cont, aux, i;
            for(i = 0; i < _size; i ++) {
                cont = 1;
                aux = 0;

                // Only swap when i != 0 and the previous value is bigger
                if(i != 0) {
                    while(i >= cont && arr[i - cont] > arr[i - aux]) {
                        printArray(arr, _size);
                        swap(arr, (i - aux), (i - cont));
                        cont ++;
                        aux ++;
                    }
                }
            }

        }

};

int main() {

    int i, _size, arr[6];
    InsertionSort* insertionSort = new InsertionSort();
    _size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < _size; i ++) {
        arr[i] = (rand() % 100) + 1;
    }

    insertionSort->sort(arr, _size);
    insertionSort->printArray(arr, _size);

    return 0;

}