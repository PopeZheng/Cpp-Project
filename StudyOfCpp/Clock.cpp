#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int hour, int mintue, int second, bool run);
	void setTime(int hour, int mintue, int second);
	void showTime();
	void setRun(bool run);
	bool getRun();
	void runTime();

private:
	int hour, mintue, second;
	bool run;
};

Clock::Clock(int hour, int mintue, int second, bool run = true) {
	this->hour = hour;
	this->mintue = mintue;
	this->second = second;
	this->run = run;
}

void Clock::setTime(int hour, int mintue, int second) {
	this->hour = hour;
	this->mintue = mintue;
	this->second = second;
}

void Clock::showTime() {
	cout << hour << ',' << mintue << ',' << second << endl;
}

void Clock::setRun(bool run) {
	this->run = run;
}

bool Clock::getRun() {
	return run;
}

void Clock::runTime() {
		second += 1;
		if (second == 60) {
			mintue += 1;
			second = 0;
			if (mintue == 60) {
				mintue = 0;
				hour += 1;
				if (hour == 24) {
					hour = 0;
				}
			}
		}
}

int main() {
	Clock clock(0, 0, 0, true);
	while (clock.getRun()){
		clock.runTime();
		clock.showTime();
	}
}