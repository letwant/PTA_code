#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int Reverse(int number);
int main(void) {
	int number;
	cin >> number;
	cout << Reverse(number);
	return 0;
}
int Reverse(int number) {
	int bai, shi, ge;
	bai = number / 100;
	shi = (number % 100) / 10;
	ge = number % 10;
	return ge * 100 + shi * 10 + bai;
}
#endif