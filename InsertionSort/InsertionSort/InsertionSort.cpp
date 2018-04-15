// InsertionSort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void PrintArray(int *array, int n) 
{
	for (int i = 0; i < n; ++i)
		cout << array[i] << " " << flush;
	cout << endl;
}

void InsertionSort(int *arr, int arr_size) 
{
	double count(0.0);

	if (arr_size > 1) 
	{
		int size = arr_size;
		for (int i = 0; i < size; ++i) 
		{
			int j = i - 1;
			int key = arr[i];
			while (j >= 0 && arr[j] > key) 
			{
				arr[j + 1] = arr[j];
				--j;
				count++;
			}
			arr[j + 1] = key;
		}
	}

	cout << endl << count << " moves" << endl;
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

	//cout << endl << "Before Insertion Sort :" << endl;
	//PrintArray(array, n);

	//time_t start, end;

	//time(&start);

	auto begin = steady_clock::now();

	InsertionSort(array, n);

	auto end = steady_clock::now();

	auto elapsed_ms = duration_cast<milliseconds>(end - begin);

	cout << "The time: " << elapsed_ms.count() << " ms" << endl;
	
	//time(&end);

	//double second = difftime(end, start);

	//cout << endl << "Operating time: " << second << endl;

	//cout << endl << "After Insertion Sort :" << endl;
	//PrintArray(array, n);

	system("pause");
	return (0);
}

