#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int TimeConversion(int time, int gap);
int main(void) {
	int time, gap;
	cin >> time >> gap;
	if (TimeConversion(time, gap) < 60) {
		cout << "0" << TimeConversion(time, gap);
	}
	else {
		cout << TimeConversion(time, gap);
	}
	return 0;
}
int TimeConversion(int time, int gap) {
	int hour, minute, gapHour, gapMinute;
	hour = time / 100;
	minute = time % 100;
	gapHour = gap / 60;
	gapMinute = gap % 60;
	hour += gap / 60;
	if (minute + gap % 60 < 0) {
		minute += gap % 60;
		minute -= 40;
	}
	minute += gap % 60;
	if (minute >= 60 && gap > 0) {
		hour++;
		minute -= 60;
	}
	return hour * 100 + minute;
}
#endif