#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int number, foot, inch;
	cin >> number;
	foot = number / (100 * 0.3048); // 转化为英尺
	inch = (int)(((number / (100 * 0.3048)) - foot) * 12); // 剩余的转化为英寸
	cout << foot << " " << inch;
	return 0;
}
#endif