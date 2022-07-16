#include <iostream>
#include "Sort.cpp"

using namespace std;

class HeapSort : public Sort {
    
    private:
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
         * @brief Sort the array
         * 
         * @param arr 
         * @param _size 
         */
        void sortArray(int arr[], int _size) {
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
