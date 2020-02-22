#include<iostream>
using namespace std;

bool isHui(int num) {
	int m = 0, i;
	int x = num;
	while (num != 0) {
		i = num % 10;
		m = 10 * m + i;
		num = num / 10;
	}
	return m == x;
}

int main() {
	cout << "Please enter the range:" << endl;
	int min, max;
	cin >> min >> max;
	for (int i = min; i <= max; i++) {
		if (isHui(i) && isHui(i * i) && isHui(i * i * i)) {
			cout << i << ',' << i * i << ',' << i * i * i << endl;
		}
	}
	return 0;
}