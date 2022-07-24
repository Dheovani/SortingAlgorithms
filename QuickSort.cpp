#include <iostream>
#include "Sort.cpp"

using namespace std;

class QuickSort : public Sort {

    private:
        /**
         * @brief Ordena o array tomando o pivô como base de comparação
         * 
         * @param arr 
         * @param start 
         * @param end 
         * @return int - Posição do pivô no array
         */
        int partition(int arr[], int start, int end) {
            int i = start - 1, pivot = arr[end - 1];
            for(int j = start; j < end - 1; j ++) {
                if(arr[j] <= pivot) {
                    i += 1;
                    swap(arr, j, i);
                }
            }

            swap(arr, i + 1, end - 1);
            printArray(arr, end);
            return i + 1;
        }

        /**
         * @brief Dividir e conquistar. Separa o array tomando a posição do pivô como base
         * 
         * @param arr 
         * @param start 
         * @param end 
         */
        void quickSort(int arr[], int start, int end) {
            if(start >= end) {
                return;
            }

            int pi = partition(arr, start, end);
            quickSort(arr, start, pi);
            quickSort(arr, pi + 1, end);
        }

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

            quickSort(arr, 0, _size);
        }

};
