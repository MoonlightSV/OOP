// MergeSort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int c;

void PrintArray(int *array, int n) {
	for (int i = 0; i < n; ++i)
		cout << array[i] << " ";
	cout << endl;
}

void Merger(int *arr, int lo, int  mi, int hi) {
	int *temp = new int[hi - lo + 1];//temporary merger array
	int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
	int k = 0;//k is for the temporary array
	while (i <= mi && j <= hi) {
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	//rest elements of left-half
	while (i <= mi)
		temp[k++] = arr[i++];
	//rest elements of right-half
	while (j <= hi)
		temp[k++] = arr[j++];
	//copy the mergered temporary array to the original array
	for (k = 0, i = lo; i <= hi; ++i, ++k)
		arr[i] = temp[k];

	c++;

	delete[]temp;
}
void MergeSortHelper(int *arr, int lo, int hi) {
	int mid;
	if (lo < hi) {
		mid = (lo + hi) >> 1;
		MergeSortHelper(arr, lo, mid);
		MergeSortHelper(arr, mid + 1, hi);
		Merger(arr, lo, mid, hi);
	}
}
void MergeSort(int *arr, int arr_size) {
	MergeSortHelper(arr, 0, arr_size - 1);
}

int main() {
	srand(time(0));

	int n;

	cout << "Enter size of array" << endl;
	cin >> n;

	int *array = new int[n];

	bool answer;
	cout << "How to fill an array? By hand(0); Random(1)" << endl;
	cin >> answer;
	if (answer)
	{
		for (auto i(0); i < n; i++)
			array[i] = 1 + rand() % 100;
	}
	else
	{
		for (auto i(0); i < n; i++)
			cin >> array[i];
	}

	cout << endl << "Before Merge Sort : " << endl;
	PrintArray(array, n);

	time_t start, end;

	time(&start);

	MergeSort(array, n);

	time(&end);

	double ms = difftime(end, start);
	
	cout << endl << "The time: " << ms << " ms" << endl;

	cout << c << " moves" << endl;

	cout << endl << "After Merge Sort : " << endl;
	PrintArray(array, n);

	system("pause");
	return (0);
}
