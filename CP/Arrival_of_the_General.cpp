// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	int count=0;
	for (i = 0; i < n - 1; i++){

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
				count++;}
				cout<<count<<endl;
}

int main()
{
	int arr[] = { 33, 44, 11, 22};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	return 0;
}
