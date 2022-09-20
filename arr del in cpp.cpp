#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot, i, elem, j;
    cout<<"ENTER ARRAY SIZE";
    cin>>tot;
    cout<<"Enter Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            i--;
            tot--;
        }
    }

    cout<<"\nElement Deleted Successfully!";
    cout<<"YOUR NEW ARRAY IS:";
    for(i=0;i<=(tot-1);i++)
        cout<<arr[i];
    cout<<endl;
    return 0;
}