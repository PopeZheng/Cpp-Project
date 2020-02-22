#include<iostream>
#include<cstdlib>
using namespace std;

unsigned int rollDice() {
	int dice1 = 1 + rand() % 6;
	int dice2 = 1 + rand() % 6;
	int sum = dice1 + dice2;
	cout << "Sum:" << dice1 << "+" << dice2 << "=" << sum << endl;
	return sum;
}

enum  GameResult{ win,lose,playing };

int main() {
	unsigned int sum, myPoint,seed;
	GameResult result;

	cout << "Please enter a seed" << endl;
	cin >> seed;
	srand(seed);

	sum = rollDice();
	switch (sum){
	case 7:
	case 11:
		result = win;
		break;
	case 2:
	case 12:
	case 13:
		result = lose;
		break;
	default:
		result = playing;
		myPoint = sum;
		cout << "Point is " << sum << endl;
		break;
	}

	while (result == playing) {
		sum = rollDice();
		if (sum == myPoint)
			result = win;
		else if (sum == 7)
			result = lose;
	}

	if (result == win)
		cout << "Win" << endl;
	else
		cout << "lose" << endl;
	return 0;

}