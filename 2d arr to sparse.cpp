#include<iostream>
using namespace std;
int main(){
    int a[50][50];
    int s[50][50];
    int i,j,r,c,m;
    int na[50][50];
    int sr=1;
    int count=0;
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
    s[0][0]=m;
    s[0][1]=m;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(a[i][j]!= 0){
                s[sr][0]=i;
                s[sr][1]=j;
                s[sr][2]=a[i][j];
                sr++;
                count++;
            }
        }
    }
    s[0][2]=count;
    cout<<endl;
    cout<<"YOUR SPARSE MATRIX IS "<<endl;
    cout<<endl;
    cout<<"\t"<<"ROW"<<"\t"<<"COLUMN"<<"\t"<<"VALUE"<<endl;
    for(i=0;i<=count;i++){
        for(j=0;j<3;j++){
           
            cout<<"\t"<<s[i][j];
        }
        cout<<endl;
    }
     cout << "          " << endl;
    cout << endl;
    cout << "CONVERTING ABOVE SPARSE MATRIX TO 2D MATRIX" << endl;
    cout << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    int n = s[0][2];
    for (int k = 1; k <= n; k++) {
        i = s[k][0];
        j = s[k][1];
        a[i][j] = s[k][2];

    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            cout <<"\t" << 
                a[i][j];
        }
        cout<<endl;
    }
    return 0;
   

}
