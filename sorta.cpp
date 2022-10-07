#include<iostream>
using namespace std;
class sorta {
public:
    int arr[40];
    int size;
    int temp;
    int k;
    int h;
    void smallest();
    void largest();
};
void sorta:: smallest() {


    cout << "ENTER SIZE OF ARRAY" << endl;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "ENTER ELEMENTS: " << flush;
        cin >> arr[i];
    }
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < (size - i - 1); j++)
            if (arr[j] > arr[j + 1]) {
                //you can use the above mentioned funcrion or do the naive way
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;												//swap(arr[j], arr[j + 1]);

            }
    }
    cout << endl;
    cout << "ENTER SMALLEST K ELEMENTS YOU WANT TO FIND: " << flush;
    cin >> k;
    cout << "--------------------------------------------------------------" << endl;
    cout << endl;
    cout << "THE SMALLEST " << k << " ELEMENTS IN THE ABOVE ARRAY ARE = " << flush;
    for (int i = 0; i < k; i++) {
        cout << arr[i] << "," << flush;
    }
    cout << endl;


    cout << "========================================================================" << endl;
}
void sorta:: largest() {
    cout << endl;
    cout << "ENTER SIZE OF ARRAY " << flush;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cout << "ENTER ELEMENT " << i << ": " << flush;
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < (size - i - 1); j++)
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
    }
    cout << "ENTER THE LARGEST H ELEMENTS YOU WANT TO KNOW: " << flush;
    cin >> h;
    cout << "---------------------------------------------------" << endl;
    cout << "________________________________________________________" << endl;
    cout << "THE LARGEST " << h << " ELEMENTS IN THIS ARRAY ARE:=";
    for (int i = 0; i < h; i++) {
        cout << arr[i] << "," << flush;
    }


}
int main() {
    sorta s;
    s.smallest();
    s.largest();
}