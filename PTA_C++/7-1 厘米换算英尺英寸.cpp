#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int number, foot, inch;
	cin >> number;
	foot = number / (100 * 0.3048); // ת��ΪӢ��
	inch = (int)(((number / (100 * 0.3048)) - foot) * 12); // ʣ���ת��ΪӢ��
	cout << foot << " " << inch;
	return 0;
}
#endif