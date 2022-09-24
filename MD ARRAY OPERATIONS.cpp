#include<iostream>
using namespace std;
void input(){
	int arr[50][50];
	int res[50][50];
	int choice; {}
	int b[50][50];
	int sub[50][50];
	int size;
	int r;
	int c;
	//taking input of array 1
	cout << "ENTER size" << endl;
	cin >> size;
	cout << "ENTER ELEMENTS" << endl;
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {
			cin >> arr[r][c];
		}
	}
	cout << "ENTER ELEMENTS IN ARRAY 2" << endl;
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {
			cin >> b[r][c];
		}
	}
	cout << "ARRAY 1" << endl;
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {
			cout << "\t" << arr[r][c];
		}
		cout << endl;
	}
	cout << "ARRAY 2" << endl;
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			cout << "\t" << b[r][c];
		}
		cout << endl;
	}
	cout << endl;
	cout << "PRESS 1 to Add the two matrices" << endl;
	cout << "PRESS 2 to Subtract the two matrices" << endl;
	cout << "PRESS 3 to calculate the transpose of any 1 matrix" << endl;
	cout << "Press 0 to exit menu" << endl;


	do {
		cout << "ENTER YOUR CHOICE: " << flush;
		cin >> choice;

		if (choice == 1)
		{
			cout << "ADDITION IS" << endl;
			for (r = 0; r < size; r++)
			{
				for (c = 0; c < size; c++)
				{
					res[r][c] = (arr[r][c] + b[r][c]);
				}
			}

			for (r = 0; r < size; r++)
			{
				for (c = 0; c < size; c++)
				{
					cout << "\t" << res[r][c];
				}
				cout << endl;

			}

		}
		else if (choice == 2)
		{
			cout << "SUBTRACTION IS" << endl;
			for (r = 0; r < size; r++)
			{
				for (c = 0; c < size; c++)
				{
					sub[r][c] = (arr[r][c] - b[r][c]);
				}
			}
			for (r = 0; r < size; r++)
			{
				for (c = 0; c < size; c++)
				{
					cout << "\t" << sub[r][c];
				}
				cout << endl;
			}


		}
		else if (choice == 3)
		{
			cout << "TRANSPOSE IS: " << endl;
			for (r = 0; r < size; r++) {
				for (c = 0; c < size; c++) {
					cout << "\t" << arr[c][r];
				}
				cout << endl;
			}


		}

		else if (choice > 3)
		{
			cout << "RETRY" << endl;
		}
		else {
			cout << "EXITED" << endl;
		}


	} while (choice > 0);
	
}
int main()
{
	int choi;
	input();
	cout << "DO YOU WANT TO RETRY THE WHOLE PROGRAM?" << endl;
	cout << "PRESS 1 to retry" << endl;
	cout << "press 0 to exit" << endl;
	do {
		cout << "ENTER YOUR CHOICE" << endl;
		cin >> choi;
		if (choi == 1) {
			input();
		}
		else if (choi > 1) {
			cout << "INVALID RETRY" << endl;

		}
	} while (choi > 0);
	return 0;
}
	