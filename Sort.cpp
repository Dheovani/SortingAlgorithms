#include <iostream>

using namespace std;

class Sort {

    protected:
        /**
         * @brief Troca determinadas posições
         * 
         * @param arr 
         * @param root 
         * @param child 
         */
        void swap(int arr[], int root, int child) {
            int aux = arr[root];
            arr[root] = arr[child];
            arr[child] = aux;
        }

    public:
        /**
         * Construtor
         */
        Sort() {}

        /**
         * @brief Print dos valores doa array
         * 
         * @param arr 
         * @param _size 
         */
        void printArray(int arr[], int _size) {
            int i;
            for (i = 0; i < _size - 1; i ++) {
                cout << arr[i] << ", ";
            }
            cout << arr[i] << endl;
        }

        /**
         * @brief Verifica se o array está vazio
         * 
         * @param arr 
         * @param _size 
         * @return bool 
         */
        bool isEmpty(int arr[], int _size) {
            for(int i = 0; i < _size; i ++) {
                if(arr[i]) {
                    return false;
                }
            }

            return true;
        }

        virtual void sortArray(int arr[], int _size) = 0;

};
