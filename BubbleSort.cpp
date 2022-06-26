#include <iostream>

using namespace std;

class BubbleSort {

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

            int cont = 0;
            do {

                for(int i = 0; i < _size - 1; i ++) {
                    if(arr[i] > arr[i + 1]) {
                        swap(arr, i, (i + 1));
                    }
                }

                cont += 1;

            } while(cont < _size);

        }

};

int main() {

    int i, _size, arr[10];
    BubbleSort* bubbleSort = new BubbleSort();
    _size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < _size; i ++) {
        arr[i] = (rand() % 100) + 1;
    }

    cout << "------------------------" << endl;

    bubbleSort->sort(arr, _size);
    bubbleSort->printArray(arr, _size);

    return 0;

    return 0;

}