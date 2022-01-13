//============================================================================
// Name        : Class1_C++_Hello.cpp
// Author      : Instructor
// Version     :
// Copyright   : Your copyright notice
// Description : Sorting numbers, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Based on: https://www.geeksforgeeks.org/bubble-sort/

// Global variable
int swap_count = 0;

// Switching two numbers using a temp variable
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;

	swap_count++;

}

// Bubble sort implementation
void bubbleSort(int arr[], int n) {
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}


/* Function to print an array */
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
	cout << " \n";
}

int main() {
	cout << "Program to sort numbers" << endl; // prints !!!Hello World!!!



	int arr[] = { 10, 5, 72, 100, 22, 11, 1, 23, 25 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Print input
	cout << "Input array: \n";
	printArray(arr, n);

	// Do sorting
	swap_count = 0;
	bubbleSort(arr, n);
	cout << "Number of swaps: \n";
	cout << swap_count;
	cout << " \n";

	// Print output
	cout << "Sorted output array: \n";
	printArray(arr, n);


	return 0;
}

