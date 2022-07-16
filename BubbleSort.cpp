#include <iostream>
#include "Sort.cpp"

using namespace std;

class BubbleSort : public Sort {

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
