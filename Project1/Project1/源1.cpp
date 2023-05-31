#include<iostream>
#include<string.h>
#include <algorithm>
#define MAXSIZE 10000001
using namespace std;
void reverse(char* s, int n) {
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	return;
}
int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	char a[MAXSIZE] = { 0 }, b[MAXSIZE] = { 0 };
	char mul[MAXSIZE] = { 0 };
	cin >> a;
	cin >> b;
	int len_a = strlen(a);
	int len_b = strlen(b);
	int length = max(strlen(a), strlen(b));
	reverse(a, len_a);
	reverse(b, len_b);
	for (int i = 0; i < len_a; i++) {
		a[i] = a[i] - '0';
	}
	for (int i = 0; i < len_b; i++) {
		b[i] = b[i] - '0';
	}
	for (int i = 0; i < length * 2; i++) {
		for (int j = 0; j < length; j++) {
			mul[i + j] += a[i] * b[j];
		}
	}
	for (int i = 1; i < length * 2; i++) {
		mul[i] = mul[i] + mul[i - 1] / 10;
		mul[i - 1] = mul[i - 1] % 10;
	}
	if (a[0] == '0' || b[0] == '0') {
		cout << 0;
		return 0;
	}
	else {
		int i = 2 * length - 1;
		while (!(int)mul[i]) {
			i--;
		}
		for (; i >= 0; i--) {
			cout << (int)mul[i];
		}
	}


}