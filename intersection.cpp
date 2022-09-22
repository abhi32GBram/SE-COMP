#include<iostream>
using namespace std;
int main(){
    int n1=5;
    int n2=5;
    int setA[n1];
    int setB[n2];
    int i;
    int j;
    cout<<"INTERSECTION OF SET"<<endl;
    cout<<"+++++++++++++++++++++++++"<<endl;
    cout<<endl;
    cout<<"ENTER ELEMENTS OF SET 1"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>setA[i];
    }
    cout<<"ENTER ELEMENTS OF SET 1"<<endl;
    for(j=0;j<n2;j++)
    {
        cin>>setB[j];
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(setA[i]==setB[j]){
                cout<<setA[i]<<endl;
            } 
                  
        }
    }
    
}