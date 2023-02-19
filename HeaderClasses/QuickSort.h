#pragma once
#include "Sort.h"

class QuickSort : public Sort {

    private:
        /**
         * Ordena o array tomando o piv� como base de compara��o
         * @param arr
         * @param start
         * @param end
         * @return int - Posi��o do piv� no array
         */
        int partition(int arr[], int start, int end);

        /**
         * Dividir e conquistar. Separa o array tomando a posi��o do piv� como base
         * @param arr
         * @param start
         * @param end
         */
        void quickSort(int arr[], int start, int end);

    public:
        /**
         * Organiza o array
         * @param arr
         * @param _size
         */
        void sortArray(int arr[], int _size);

};
