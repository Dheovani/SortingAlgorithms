#include <iostream>
#include "SortTester.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"

using namespace std;

void SortTester::sortTest(Sort* sorter) {
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

void SortTester::bubbleSortTest() {
	BubbleSort bubbleSort;
	sortTest(&bubbleSort);
}

void SortTester::heapSortTest() {
	HeapSort heapSort;
	sortTest(&heapSort);
}

void SortTester::mergeSortTest() {
	MergeSort mergeSort;
	sortTest(&mergeSort);
}

void SortTester::insertionSortTest() {
	InsertionSort insertionSort;
	sortTest(&insertionSort);
}

void SortTester::quickSortTest() {
	QuickSort quickSort;
	sortTest(&quickSort);
}

void SortTester::selectionSortTest() {
	SelectionSort selectionSort;
	sortTest(&selectionSort);
}
