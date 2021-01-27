#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

// ֱ��ʹ��һ����������ÿһ���ֵ����ÿһ���ֵ����ֵ�Ƚϣ����С����ֵ������ѭ��
double Factorial(int n) {
	if (n == 0) // ���Ϊ0��ֱ�ӷ���1
		return 1;
	double numerator=1, denominator=1; // numeratorΪ���ӣ�denominatorΪ��ĸ
	for (int i = 1; i <= n; i++) { // ������ӵ�ֵ
		numerator *= i;
	}
	for (int j = 1; j <= 2*n+1; j += 2) { // �����ĸ��ֵ
		denominator *= j;
	}
	return numerator / denominator;
}
#if 0
int main(void) {
	double precision, number=1, sum=0;
	int i = 0;
	cin >> precision;
	while (number > precision) {
		number = Factorial(i);
		sum += number;
		i++;
	};
	cout << setiosflags(ios::fixed) << setprecision(6) << 2 * sum;
	return 0;
}
#endif


#if 0
#include<stdio.h>
int main()
{
	int n = 0;
	double e, f;//eΪ�������ֵ��fΪ����һ���ֵ
	double fz = 1, fm = 1;//��ʼ�����ӣ���ĸΪ1
	double sum = 0, pi;//sumΪ����ĺͣ�piΪ���ս��
	while (~scanf_s("%lf", &e))
	{
		for (f = 1; f >= e; n++)
		{
			if (n == 0)//��һ�������
				fz = 1;
			else
				fz = fz * n;//��һ��ķ��ӵ���ǰһ��ķ��ӳ���n
			fm = fm * (2 * n + 1);//��һ��ķ�ĸ����ǰһ��ķ��ӳ��ϣ�2n+1��
			f = fz / fm;
			sum = sum + f;
		}
		pi = 2 * sum;
		printf("%.6f\n", pi);
	}
	return 0;
}
#endif