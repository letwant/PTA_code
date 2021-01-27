#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
#if 0
int main(void) {
	float water, cost;
	cin >> water;
	if (water <= 15)
		cost = 4 * water / 3;
	else
		cost = 2.5 * water - 17.5;
	cout << setiosflags(ios::fixed) << setprecision(2) << cost;
	return 0;
}
#endif