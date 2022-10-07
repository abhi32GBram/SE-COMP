#include<iostream>
using namespace std;
void sorat() {
	int n;
	int arr[40];
	bool flag=0;
	int pos;
	int key;
	cout << "ENTER SIZE OF ARRAY" << endl;
	cin >> n;
	cout << "ENTER ELEMENTS" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "ENTER THE THE NUMBER YOU WANT TO SEARCH" << endl;
	cin >>  key;
	for (int i = 0; i < n; i++) {
		if (key==arr[i]) {
			pos = i;
			flag = 1;
			break;
			
		}
	}

	if (flag == 1) {
		cout << key << " found in array" << endl;
	}
	else {
		cout << key << " Not found in array" << endl;
	}
	
	
}
int main() {
	sorat();
	return 0;

}