#pragma once
#include "Sort.h"

class HeapSort : public Sort {

    private:
        /**
         * Criar os "heaps" nas posições determinadas
         * @param arr
         * @param root
         * @param _size
         */
        void heapify(int arr[], int root, int _size);

    public:
        /**
         * Construtor
         */
        HeapSort() {}

        /**
         * Organiza o array
         * @param arr
         * @param _size
         */
        void sortArray(int arr[], int _size);

};
