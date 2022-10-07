#include<iostream>
using namespace std;
class box {
public:
	double l, b, h, v;
	static int count;
box(double x = 2, double y = 2, double z = 2) {
	l = x;
	b = y;
	h = z;
	cout << "OBJ CREATED" << endl;
	count++;
}
~box() {
	cout << "OBJ DESTROYED" << endl;
}
	double volume() {
		
		v = l * b * h;
		cout << "VOLUME" << v << endl;
		return 0;
	}
	static int getcount() {
		return count;
	}
};
int box::count;
int main() {
	cout << "count=" << box::count << endl;
	box b1, b2(4, 5, 6), b3(3, 6, 8);
	b1.volume();
	cout << "count=" << box::count << endl;
	b1.getcount();
	cout << "count=" << box::count << endl;
	b2.volume();
	cout << "count=" << box::count << endl;
	b2.getcount();
	cout << "count=" << box::count << endl;
	b3.volume();
	cout << "count=" << box::count << endl;
	b3.getcount();
	cout << "count=" << box::count << endl;
}