#include <iostream>
#include "Sort.cpp"

using namespace std;

class MergeSort : public Sort {

    private:
        /**
         * @brief Realiza o merge criando dois novos arrays, com base no principal
         * 
         * @param arr 
         * @param start 
         * @param half 
         * @param end 
         */
        void merge(int arr[], int const start, int const half, int const end) {
            int const leftSize = half - start + 1;
            int const rightSize = end - half;

            // Criar os arrays
            int leftArr[leftSize],
                rightArr[rightSize];

            for(int i = 0; i < leftSize; i ++) {
                leftArr[i] = arr[start + i];
            }
            for(int j = 0; j < rightSize; j++) {
                rightArr[j] = arr[half + 1 + j];
            }

            // Unir os arrays
            int cont = start, lAux = 0, rAux = 0;
            while(lAux < leftSize && rAux < rightSize) {
                if(leftArr[lAux] <= rightArr[rAux]) {
                    arr[cont] = leftArr[lAux];
                    lAux ++;
                } else {
                    arr[cont] = rightArr[rAux];
                    rAux ++;
                }
                cont ++;
            }

            // Lidar com os valores restantes
            while(lAux < leftSize) {
                arr[cont] = leftArr[lAux];
                lAux ++;
                cont ++;
            }

            while(rAux < rightSize) {
                arr[cont] = rightArr[rAux];
                rAux ++;
                cont ++;
            }
        }

        /**
         * Dividir para conquistar
         * @brief Essa função realiza a divisão do array com chamada recursiva da função
         * 
         * @param arr 
         * @param start 
         * @param end 
         */
        void mergeSort(int arr[], int start, int end) {
            if(start >= end) {
                return;
            }

            int half = start + (end - start) / 2;
            mergeSort(arr, start, half);
            mergeSort(arr, half + 1, end);
            merge(arr, start, half, end);
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

            mergeSort(arr, 0, _size - 1);
        }

};
