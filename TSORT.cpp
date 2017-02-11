#include <iostream>  
#include <algorithm> 
#include <stdio.h>

using namespace std;

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

int TSORT()
{
	int a[10000], n, c;
	scanf("%d", &n);

	for (c = 0; c < n; c++)
		scanf("%d", &a[c]);

	quickSort(a, 0, n - 1);

	for (c = 0; c < n; c++)
		printf("%d\n", a[c]);

	return 0;
}