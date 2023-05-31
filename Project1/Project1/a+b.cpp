//#include<iostream>
//#include<string>
//#include <algorithm>
//#define MAXSIZE 11
//using namespace std;
//void reverse(char*s,int n) {
//	for (int i = 0,j=n-1; i < j; i++,j--) {
//		char tmp = s[i];
//		s[i] = s[j];
//		s[j] = tmp;
//	}
//	return;
//}
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//int main() {
//	char a[MAXSIZE] = { 0 }, b[MAXSIZE] = { 0 };
//	char mul[MAXSIZE] = { 0 };
//	cin >> a;
//	cin >> b;
//	int len_a = strlen(a);
//	int len_b = strlen(b);
//	int length = strlen(a) + strlen(b);
//	reverse(a, len_a);
//	reverse(b, len_b);
//	for (int i = 0; i < len_a; i++) {
//		a[i] = a[i] - '0';
//	}
//	for (int i = 0; i < len_b; i++) {
//		b[i] = b[i] - '0';
//	}
//	for (int i = 0; i < length; i++) {
//		mul[i] += a[i] + b[i];
//	}
//	for (int i = 1; i <= length; i++) {
//		mul[i] = mul[i] + mul[i - 1] / 10;
//		mul[i - 1] = mul[i - 1] % 10;
//	}
//	if (mul[length] > 0) {
//		cout << (int)mul[length];
//	}
//	for (int i = length - 1; i >= 0; i--) {
//		cout << (int)mul[i];
//	}
//
//}