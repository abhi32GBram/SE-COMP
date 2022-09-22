#include<iostream>
using namespace std;
int main(){
    int a[40];
    int b[40];
    int c[40];
    int i;
    int j;
    int n;

    cout<<"ENTER CARDINALITY OF SET 1&2"<<endl;
    cin>>n;
    cout<<"ENTER ELEMENTS OF SET 1"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ENTER ELEMENT OF SET 2"<<endl;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        c[n*2-(n-i)]=b[i];
    }
    
    cout<<"THE UNION OF THIS SET IS: {";
    for(i=0;i<n*2;i++){
        cout<<c[i]<<",";
        
    }
    cout<<"}";
    
}