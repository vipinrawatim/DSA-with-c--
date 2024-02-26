#include<iostream>
using namespace std;
int main () {
    int row;
    cout<<"enter the number of rows ";
    cin>>row;
    int i=1;
    int j=1;
    while(i<=row){
        j=1;
        while(j<=row){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
i++;
    }
    return 0;
}