#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int N, U, D; // N为井口深度，U为每次向上爬的高度，D为每次向下滑的高度
	int route = 0, time = 0; // route为爬行总路径长度, time为爬行时间
	cin >> N >> U >> D;
	while (true) {
		route += U;
		time++;
		if (route >= N)
			break;
		route -= D;
		time++;
	}
	cout << time;
	return 0;
}
#endif