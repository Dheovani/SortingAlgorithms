#include <iostream>
#include "SortTester.cpp"

using namespace std;

int main() {
	SortTester tester;

	cout << "BUBBLESORT TEST:" << endl;
	tester.bubbleSortTest();
	cout << endl;
	cout << endl;

	cout << "HEAPSORT TEST:" << endl;
	tester.heapSortTest();
	cout << endl;
	cout << endl;

	cout << "MERGESORT TEST:" << endl;
	tester.mergeSortTest();
	cout << endl;
	cout << endl;

	return 0;
}
