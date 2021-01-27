#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int weight1, weight2, weight3;
	cin >> weight1 >> weight2 >> weight3;
	if (weight1 == weight2)
		cout << "C";
	else {
		if (weight1 == weight3)
			cout << "B";
		else
			cout << "A";
	}
	return 0;
}
#endif