#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	float open, high, low, close;
	cin >> open >> high >> low >> close;
	if (close < open) {
		if (low < close) {
			if (high > open) {
				cout << "BW-Solid with Lower Shadow and Upper Shadow";
			}
			else {
				cout << "BW-Solid with Lower Shadow";
			}
		}
		else {
			if (high > open) {
				cout << "BW-Solid with Upper Shadow";
			}
			else {
				cout << "BW-Solid";
			}
		}
	}
	else if (close == open) {
		if (low < close) {
			if (high > open) {
				cout << "R-Cross with Lower Shadow and Upper Shadow";
			}
			else {
				cout << "R-Cross with Lower Shadow";
			}
		}
		else {
			if (high > open) {
				cout << "R-Cross with Upper Shadow";
			}
			else {
				cout << "R-Cross";
			}
		}
	}
	else if(close > open){
		if (low < open) {
			if (high > close) {
				cout << "R-Hollow with Lower Shadow and Upper Shadow";
			}
			else {
				cout << "R-Hollow with Lower Shadow";
			}
		}
		else {
			if (high > close) {
				cout << "R-Hollow with Upper Shadow";
			}
			else {
				cout << "R-Hollow";
			}
		}
	}
	return 0;
}
#endif