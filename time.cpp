#include<iostream>
using namespace std;
class Time{
public:
	int hr, min, sec;
	Time() {
		cout << "ZERO ARGUMENT CONSTRUCTER CALLED" << endl;
	}
	Time(int a, int b, int c) {
		hr = a;
		min = b;
		sec = c;
		cout << "THREE ARG CONS CALLED" << endl;
	}
	Time Add(Time);
	void show(void);
};
void Time::show() {
	cout << hr << " " << min << " " << sec << endl;
}
Time Time::Add(Time T) {
	if (sec > 60) {
		sec += T.min;
	}
	else {
		sec += T.sec;
	}
	if (min > 60) {
		min += T.hr;
	}
	else {
		min += T.min;
	}
	hr += T.hr;
	

	return(Time(hr, min, sec));
}
int main() {
	Time T1(10, 70, 98), T2(10, 40, 90), T3;
	T3 = T1.Add(T2);
	T3.show();
	return 0;



}