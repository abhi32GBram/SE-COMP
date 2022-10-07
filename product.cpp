#include<iostream>
using namespace std;
class Product {
public:
	int a = 0;
	int b = 0;
	int c = 0;
Product() {
	cout << "CREATED AN OBJECT" << endl;
	}
Product(int p, int q) {
	a = p;
	b = q;
}
~Product() {
	cout << "ARGUMENT DESTROYED" << endl;
}
Product mulpl(Product);
void show(void);
void get(void);
};
void Product::get() {
	cout << "ENTER NUMBER 1" << endl;
	cin >> a;
	cout << "ENTER NUMBER 2" << endl;
	cin >> b;
}
void Product::show() {
	cout << "YOUR PRODUCT IS "<<c<<endl;
}
Product Product::mulpl(Product P){
	c = a * b;
	return(Product(a, b));

}
int main() {
	Product P1;
	P1.get();
	P1.mulpl(P1);
	P1.show();
}

