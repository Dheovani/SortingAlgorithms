#include <iostream>
#include "Sort.cpp"

using namespace std;

class InsertionSort : public Sort {

    public:
        /**
         * @brief Sort the array
         * 
         * @param arr 
         * @param _size 
         */
        void sortArray(int arr[], int _size) {
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
