#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#if 0
int main(void) {
	int N, U, D; // NΪ������ȣ�UΪÿ���������ĸ߶ȣ�DΪÿ�����»��ĸ߶�
	int route = 0, time = 0; // routeΪ������·������, timeΪ����ʱ��
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