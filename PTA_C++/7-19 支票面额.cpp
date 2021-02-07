#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int y, f, n;						// 要定义成int，float后面会有小数点问题
	cin >> n;
	int count = 0;
	for (y = 0; y < 100; y++) {
		for (f = 0; f < 100; f++) {
			if (98 * f - n == 199 * y) {
				cout << y << "." << f;	// 这里一定要用“.”而不能用y*100+f，加会出错
				break;
			}
			else {
				count++;
			}
		}
	}
	if (count == 10000)
		cout << "No Solution";
	return 0;
}
#endif