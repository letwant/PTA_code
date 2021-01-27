#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	float y, f, n;
	cin >> n;
	int count = 0;
	for (y = 0; y < 100; y++) {
		for (f = 0; f < 100; f++) {
			if (f + y / 100 - n / 100 == 2 * y + 2 * f / 100) {
				cout << y + f / 100;
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