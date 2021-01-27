#include <stdio.h>
#include "header.h"


int main() {
	int A[] = { 5, 3, 2, 1, 4, 7, 6, 0};
	int B[] = { 1, 3, 4, 5, 7, 11, 16 };
	int len = sizeof(A) / sizeof(int);
	int lenB = sizeof(B) / sizeof(B[0]);
	//QuickSort(A, 0, len - 1);
	//InsertSort(A, len);
	shellSort(A, len);
	for (int i = 0; i < len; i++)
		printf("%d ", A[i]);
	printf("\n");
	int index = BinSearch(B, lenB, 4);
	printf("index is %d\n", index);
	return 0;
}
