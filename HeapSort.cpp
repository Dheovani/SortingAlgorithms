#include <iostream>

using namespace std;

class HeapSort {
    
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

        /**
         * @brief Create heap in the array's given position
         * 
         * @param arr 
         * @param root 
         * @param _size 
         */
        void heapify(int arr[], int root, int _size) {

            if(isEmpty(arr, _size)) {
                cout << "Array is empty" << endl;
                return;
            }

            int max = root;
            int lchild = (root * 2) + 1;
            int rchild = (root * 2) + 2;

            // Select the biggest value in the given positions
            max = ((lchild < _size) && (arr[lchild] > arr[max])) ? lchild : max;
            max = ((rchild < _size) && (arr[rchild] > arr[max])) ? rchild : max;

            if(max != root) {
                swap(arr, root, max);
                heapify(arr, max, _size);
            }

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
                if(arr[i] != NULL) {
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

            int i;
            // Build heap in the non-leaf elements
            for(i = (_size / 2) - 1; i >= 0; i --) {
                heapify(arr, i, _size);
            }

            // Sort elements starting from root
            for(i = _size - 1; i > 0; i --) {
                swap(arr, 0, i);
                heapify(arr, 0, i);
            }

        }

};

int main() {

    int i, _size, arr[10];
    HeapSort* heapSort = new HeapSort();
    _size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < _size; i ++) {
        arr[i] = (rand() % 100) + 1;
    }

    cout << "------------------------" << endl;

    heapSort->sort(arr, _size);
    heapSort->printArray(arr, _size);

    return 0;

}