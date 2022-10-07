#include<iostream>
using namespace std;
class box {
public:
	double length;
	double breadth;
	double height;

	double getvolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);
};
double box::getvolume() {
	return length * breadth * height;
}
void box::setLength(double len) {
	cout << "ENTER LENTH" << endl;
	length = len;

}
void box::setBreadth(double bre) {
	cout << "ENTER BREADTH" << endl;
	breadth = bre;

}
void box::setLength(double hei) {
	cout << "ENTER HEIGHT" << endl;
	height = hei;
	
}
int main() {
	box b;
	b.setLength(90);
	b.setHeight(80);
	b.setBreadth(50);
	cout<<b.getvolume();





}