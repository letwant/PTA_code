#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int number, index = 1;
	cin >> number;
	for (int i = number; i <= number + 3; i++) {
		for (int j = number; j <= number + 3; j++) {
			for (int k = number; k <= number + 3; k++) {
				if (i != j && i != k && j != k) { // ɸѡ�����������������
					cout << i * 100 + j * 10 + k;
					if (index == 6) { // �����������
						index = 1;
						cout << endl;
					}
					else {
						index++;
						cout << " ";
					}
				}
			}
		}
	}
	return 0;
}
#endif