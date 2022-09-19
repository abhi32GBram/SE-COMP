#include<iostream>
using namespace std;
int main(){
    int array[40];
    int c;
    int position;
    int value;
    int n;
    cout<<"ARRAY INSERTION"<<endl;
    cout<<"ENTER THE SIZE OF YOUR ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF YOUR ARRAY"<<endl;
    for(c=0;c<n;c++){
        cin>>array[c];
    }
    cout<<"ENTER VALUE YOU WANT TO ENTER"<<endl;
    cin>>value;
    cout<<"ENTER THE POSITION AT WHICH YOU WANT TO ENTER"<<endl;
    cin>>position;
    for(c=n-1;c<position-1;c++){
        array[c++]=array[c];
    }
    array[position-1]=value;
    cout<<"NEW ARRAY IS "<<endl;
    for(c=0;c<n;c++){
        cout<<array[c];
    }
    return 0;
}