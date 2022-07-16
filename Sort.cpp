#include <iostream>

using namespace std;

class Sort {

    protected:
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
         * Constructor
         */
        Sort() {}

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

        virtual void sortArray(int arr[], int _size);

};
