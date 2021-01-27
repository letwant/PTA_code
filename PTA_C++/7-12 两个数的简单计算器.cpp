#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>
using namespace std;
#if 0
int main(void) {
	int a, b;
	float result;
	string c;
	map<string, int> mymap;
	mymap.insert(make_pair("+", 1));
	mymap.insert(make_pair("-", 2));
	mymap.insert(make_pair("*", 3));
	mymap.insert(make_pair("/", 4));
	mymap.insert(make_pair("%", 5));
	cin >> a >> c >> b;
	map<string, int>::iterator iter;
	iter = mymap.find(c);
	if (iter != mymap.end()) {
		switch (iter->second)
		{
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
		case 5:
			result = a % b;
			break;
		default:
			break;
		}
		cout << result;
	}
	else {
		cout << "ERROR";
	}
	return 0;
}
#endif