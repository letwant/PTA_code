#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

float cal(float a3, float a2, float a1, float a0, float x) {
	return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}
#if 0
int main(void) {
	float a3, a2, a1, a0; // ϵ��
	float a, b, mid; // ����˵�ֵ���е�ֵ
	float fa, fb, fmid=-1; // �����洢�˵㺯��ֵ�Լ��е㺯��ֵ
	cin >> a3 >> a2 >> a1 >> a0;
	cin >> a >> b;
	while (b - a >= 0.001) { // ����һ��Ҫд��0.001�����д0.01����ֵ�����
		fa = cal(a3, a2, a1, a0, a);
		fb = cal(a3, a2, a1, a0, b);
		mid = (a + b) / 2;
		if (fa * fb < 0) {
			fmid = cal(a3, a2, a1, a0, mid);
			if (fmid == 0) {
				cout << setiosflags(ios::fixed) << setprecision(2) << mid;
				break;
			}
			else if (fa * fmid > 0) { // �е㺯��ֵ����˵㺯��ֵͬ��
				a = mid;
			}
			else if (fb * fmid > 0) { // �е㺯��ֵ���Ҷ˵㺯��ֵͬ��
				b = mid;
			}
		}
		else if (fa * fb == 0) { // ���ڶϵ㴦
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
	if (fmid != 0 && fa * fb != 0)  // ���ڶ˵����е�ֵҲ��Ϊ0ʱ��������Ƹ�
		cout << setiosflags(ios::fixed) << setprecision(2) << mid;
	return 0;
}
#endif