#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
#if 0
int main(void) {
	int a, b, index=0, sum=0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << setw(5) << i;
		if (index == 4) {
			cout << endl;
			index = 0;
		}
		else {
			index++;
		}
		sum += i;
	}
	if (b - a != 4) { // 只有一行就不输出换行符
		cout << endl;
	}
	cout << "Sum = " << sum;
	return 0;
}
#endif