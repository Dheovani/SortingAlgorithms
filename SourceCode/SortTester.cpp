#ifndef SORT_TESTER_H
#define SORT_TESTER_H

#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"

using namespace std;

class SortTester {

	public:
		void sortTest(Sort* sorter) {
			int* arr = new int[100];

			for (int i = 0; i < 100; i++) {
				*(arr + i) = rand() % 100;
			}

			cout << "Unsorted array:" << endl;
			sorter->printArray(arr, 100);
			cout << endl;

			cout << "Starting array sorting!" << endl;
			sorter->sortArray(arr, 100);
			cout << endl;

			cout << "Sorted array:" << endl;
			sorter->printArray(arr, 100);
			cout << endl;

			delete[] arr;
			arr = NULL;
		}

		void bubbleSortTest() {
			BubbleSort bubbleSort;
			sortTest(&bubbleSort);
		}

		void heapSortTest() {
			HeapSort heapSort;
			sortTest(&heapSort);
		}

		void mergeSortTest() {
			MergeSort mergeSort;
			sortTest(&mergeSort);
		}

		void insertionSortTest() {
			InsertionSort insertionSort;
			sortTest(&insertionSort);
		}

		void quickSortTest() {
			QuickSort quickSort;
			sortTest(&quickSort);
		}

		void selectionSortTest() {
			SelectionSort selectionSort;
			sortTest(&selectionSort);
		}

};

#endif