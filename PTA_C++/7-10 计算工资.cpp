#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
#if 0
int main(void) {
	int workTime, workAge;
	float salary;
	cin  >> workAge >> workTime;
	if (workTime <= 40) {
		if (workAge < 5)
			salary = 30 * workTime;
		else
			salary = 50 * workTime;
	}
	else {
		if (workAge < 5)
			salary = 30 * 40 + 45 * (workTime - 40);
		else
			salary = 50 * 40 + 75 * (workTime - 40);
	}
	cout << setiosflags(ios::fixed) << setprecision(2) << salary;
	return 0;
}
#endif