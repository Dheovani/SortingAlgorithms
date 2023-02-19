#pragma once
#include "Sort.h"

class BubbleSort : public Sort {

	public:
		/**
		 * Construtor
		 */
		BubbleSort() {}

		/**
		 * Organiza o array
		 * @param arr
		 * @param _size
		 */
		void sortArray(int arr[], int _size);

};
