#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

float cal(float a3, float a2, float a1, float a0, float x) {
	return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}
#if 0
int main(void) {
	float a3, a2, a1, a0; // 系数
	float a, b, mid; // 区间端点值和中点值
	float fa, fb, fmid=-1; // 用来存储端点函数值以及中点函数值
	cin >> a3 >> a2 >> a1 >> a0;
	cin >> a >> b;
	while (b - a >= 0.001) { // 这里一定要写上0.001，如果写0.01近似值会出错
		fa = cal(a3, a2, a1, a0, a);
		fb = cal(a3, a2, a1, a0, b);
		mid = (a + b) / 2;
		if (fa * fb < 0) {
			fmid = cal(a3, a2, a1, a0, mid);
			if (fmid == 0) {
				cout << setiosflags(ios::fixed) << setprecision(2) << mid;
				break;
			}
			else if (fa * fmid > 0) { // 中点函数值和左端点函数值同号
				a = mid;
			}
			else if (fb * fmid > 0) { // 中点函数值和右端点函数值同号
				b = mid;
			}
		}
		else if (fa * fb == 0) { // 根在断点处
			if (fa == 0) {
				cout << setiosflags(ios::fixed) << setprecision(2) << a;
				break;
			}
			else {
				cout << setiosflags(ios::fixed) << setprecision(2) << b;
				break;
			}
		}
	}
	if (fmid != 0 && fa * fb != 0)  // 不在端点且中点值也不为0时，输出近似根
		cout << setiosflags(ios::fixed) << setprecision(2) << mid;
	return 0;
}
#endif