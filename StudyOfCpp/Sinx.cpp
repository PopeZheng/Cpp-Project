#include<iostream>
#include<cmath>
using namespace std;

double power(double x, int n) {
	double result;
	result = 1;
	for (int i = 1; i <= n; i++) {
		result *= x;
	}
	return result;
}

int multi(int n) {
	int answer = 1;
	for (int i = 1; i <= n; i++) {
		answer *= i;
	}
	return answer;
}

double sin(double x) {
	double sum = 0;
	for (int j = 1; j <= 1000; j++) {
		sum += power(x, 2 * j - 1) * power(-1, j + 1) / multi(2 * j - 1);
	}
	return sum;
}

double k(double r, double s) {
	double key;
	if (r * r <= s * s) {
		key = sqrt(sin(r) * sin(r) + sin(s) * sin(s));
	}
	else
		key = 0.5 * sin(r * s);
	return key;
}

int main() {
	double r, s;
	cin >> r >> s;
	double key = k(r, s);
	cout << key;
	return 0;
}