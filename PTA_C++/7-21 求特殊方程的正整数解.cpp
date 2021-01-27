#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int N, count=0;
	cin >> N;
	for (int Y = 100; Y >= 1; Y--) { // 使用逆序遍历，解决问题
		for (int X = Y; X >= 1; X--) {
			if (X * X + Y * Y == N) {
				cout << X << " " << Y << endl;
			}
			else {
				count++;
			}	
		}
	}
	if (count == 5050) {
		cout << "No Solution";
	}
	return 0;
}
#endif