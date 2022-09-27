#include<iostream>
using namespace std;
int main(){
    int a[50][50];
    int m;
    int i,j;
    int sum1=0;
    int sum2=0;
    cout<<"IF THE MATRIX IS OF TYPE MxM PLEASE ENTER M"<<endl;
    cin>>m;
    cout<<"ENTER ELEMENTS"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"YOUR MATRIX IS: "<<endl;
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }    

    cout<<"THE ADDITION OF DIAGONAL ELEMENTS OF THIS MATRIX ARE"<<endl;
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==j){
                sum1 += a[i][j];
            }
            if(i+j==(m-1)){
                sum2 +=a[i][j];
            }
        }
    }

    int netsum = sum1+sum2;
    cout<<endl;
    cout<<"THE SUM OF 1 DIAGONAL IS: "<<sum1<<endl;
    cout<<endl;
    cout<<"THE SUM OF OTHER DIAGONAL IS: "<<sum2<<endl;
    cout<<endl;
    cout<<"THE SUM OF BOTH DIAGONALS IS: "<<netsum<<endl;

    return 0;
}