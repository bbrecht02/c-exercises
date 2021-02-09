// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

void sort(int arr[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}

	for (int i = n - 1; i > -1; i--)
		printf("%d ", arr[i]);
}

int main(int argc, char **argv)
{
	int n = argc - 1;
	int count;
	int seq[n];
	int item;
	int k = 0;

	for (int i = 1; i < n + 1; i++) {
		count = 1;
		for (int j = i + 1; j < n + 1; j++) {
			if (strcmp(argv[i], "a") != 0) {
				if (strcmp(argv[i], argv[j]) == 0) {
					count++;
					argv[j] = "a";
				}
			}
		}
		if (count % 2 != 0 && strcmp(argv[i], "a") != 0) {
			item = atoi(argv[i]);
			seq[k] = item;
			k++;
		}
	}

	sort(seq, k);
	printf("\n");

	return 0;
}
