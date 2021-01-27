#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip> // 头文件不能少
using namespace std;
#if 0
int main(void) {
	float num1, num2;
	int num;
	char c;
	cin >> num1 >> num >> c >> num2;
	cout << c << " " << num << " " << setiosflags(ios::fixed) << setprecision(2) << num1 << " " << num2;
	return 0;
}
#endif