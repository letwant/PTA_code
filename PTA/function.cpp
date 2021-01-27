#include "header.h"
// ���ŵĹؼ���
// 1�����ұ��ұȻ���С��Ԫ�أ������λ�û���
// 2��������Ҵ��ڻ���ڻ����Ԫ�أ������λ�û���
// 3����left��rightָ����ͬʱ����ָ���λ�ü��������ڵ�����λ��
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
	for (int i = 1; i < N; i++) {		// �� 1 �����϶�������ģ��ӵ� 2 ������ʼ���������β�����������
		int temp = A[i];				// ȡ���� i ��������ǰ i-1 �����ȽϺ󣬲������λ��
		int j = i - 1;					// ��Ϊǰ i-1 �������Ǵ�С������������У�����ֻҪ��ǰ�Ƚϵ��� (array[j]) �� temp �󣬾Ͱ����������һλ
		while (j >= 0 && A[j] < temp) {	// �� j < 0 �� array[j] < temp(array[i]) ʱ��ֹ
			A[j + 1] = A[j];			// ������ temp(array[i]) �����ݺ���
			j--;                        // ��ǰ�Ƚ�
		}                               // ����ѭ��
		A[j + 1] = temp;				// array[i]���뵽��ȷ��λ����
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