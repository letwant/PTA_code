#include "header.h"
// 快排的关键点
// 1、在右边找比基点小的元素，与基点位置互换
// 2、在左边找大于或等于基点的元素，与基点位置互换
// 3、当left与right指针相同时，则指针的位置即基点所在的最终位置
void QuickSort(int arr[], int leftBound, int rightBound) {
	if (leftBound < rightBound) {
		int left = leftBound, right = rightBound, prior = arr[leftBound];
		while (left < right) {
			while (left < right && arr[right] >= prior) right--;
			if (left < right) arr[left++] = arr[right];
			while (left < right && arr[left] < prior) left++;
			if (left < right) arr[right--] = arr[left];
		}
		arr[left] = prior;
		QuickSort(arr, leftBound, left - 1);
		QuickSort(arr, left + 1, rightBound);
	}
}
void InsertSort(int A[], int N) {
	for (int i = 1; i < N; i++) {		// 第 1 个数肯定是有序的，从第 2 个数开始遍历，依次插入有序序列
		int temp = A[i];				// 取出第 i 个数，和前 i-1 个数比较后，插入合适位置
		int j = i - 1;					// 因为前 i-1 个数都是从小到大的有序序列，所以只要当前比较的数 (array[j]) 比 temp 大，就把这个数后移一位
		while (j >= 0 && A[j] < temp) {	// 当 j < 0 或 array[j] < temp(array[i]) 时终止
			A[j + 1] = A[j];			// 将大于 temp(array[i]) 的数据后移
			j--;                        // 向前比较
		}                               // 结束循环
		A[j + 1] = temp;				// array[i]插入到正确的位置上
	}
}

void shellSort(int A[], int N) {
	int i, j, dk;
	int tmp;
	for (dk = N / 2; dk > 0; dk /= 2) {
		for (i = dk; i < N; i++) {
			tmp = A[i];
			for (j = i; j >= dk; j -= dk) {
				if (tmp < A[j - dk])
					A[j] = A[j - dk];
				else break;
			}
			A[j] = tmp;
		}
	}
}
int BinSearch(int arr[], int n, int val) {
	int mid, low = 0, high = n - 1;
	while (low <= high) {
		mid = (high + low) / 2;
		if (arr[mid] == val) return mid;
		else if (arr[mid] > val) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}