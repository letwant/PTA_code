#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
#if 0
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << std::left << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}
#endif