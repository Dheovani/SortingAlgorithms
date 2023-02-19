#pragma once
#include "Sort.h"

class MergeSort : public Sort {

    private:
        /**
         * Realiza o merge criando dois novos arrays, com base no principal
         * @param arr
         * @param start
         * @param half
         * @param end
         */
        void merge(int arr[], int const start, int const half, int const end);

        /**
         * Dividir para conquistar
         * Essa função realiza a divisão do array com chamada recursiva da função
         * @param arr
         * @param start
         * @param end
         */
        void mergeSort(int arr[], int const start, int const end);

    public:
        /**
         * Organiza o array
         * @param arr
         * @param _size
         */
        void sortArray(int arr[], int _size);

};
