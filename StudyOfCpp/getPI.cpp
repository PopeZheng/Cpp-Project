#include<iostream>
using namespace std;

double power(double x,int n) {
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result *= x;
	}
	return result;
}

double arctan(double x) {
	double sum = 0;
	for (int i = 1; i <= 1000; i++) {
		sum += power(-1, i + 1) * power(x, 2 * i - 1) / (2 * i - 1);
	}
	return sum;
}

double getPI() {
	double PI;
	PI = 16 * arctan(0.2) - 4 * arctan(1.0 / 239);
	return PI;
}

int main() {
	double PI = getPI();
	cout << "PI = " << PI;
	return 0;
}
