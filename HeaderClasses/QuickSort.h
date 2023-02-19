#pragma once
#include "Sort.h"

class QuickSort : public Sort {

    private:
        /**
         * Ordena o array tomando o pivô como base de comparação
         * @param arr
         * @param start
         * @param end
         * @return int - Posição do pivô no array
         */
        int partition(int arr[], int start, int end);

        /**
         * Dividir e conquistar. Separa o array tomando a posição do pivô como base
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
