#include <iostream>
#include "Sort.cpp"

using namespace std;

class QuickSort : public Sort {

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
        }

};
