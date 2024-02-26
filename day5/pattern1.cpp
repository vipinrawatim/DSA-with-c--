#include<iostream>
using namespace std;
int main () {
    int row;
    cout<<"enter the row ";
    cin>>row;
    int i=1;
    int j=1;
    char a;

    while(i<=row){
        j=1;
        while(j<=row){
            a='A'+i-1;
            cout<<a<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}