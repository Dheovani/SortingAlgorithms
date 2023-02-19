#pragma once

#ifndef SORT_H
#define SORT_H

using namespace std;

class Sort {

    protected:
        /**
         * Troca determinadas posições
         * @param arr
         * @param root
         * @param child
         */
        void swap(int arr[], int root, int child);

    public:
        /**
         * Construtor
         */
        Sort() {}

        /**
         * Print dos valores doa array
         * @param arr
         * @param _size
         */
        void printArray(int arr[], int _size);

        /**
         * Verifica se o array está vazio
         * @param arr
         * @param _size
         * @return bool
         */
        bool isEmpty(int arr[], int _size);

        virtual void sortArray(int arr[], int _size) = 0;

};

#endif