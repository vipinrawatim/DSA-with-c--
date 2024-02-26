#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the row ";
    cin>>n;
    int i=1;
    int j=1;
    int c;

    while(i<=n){
        j=1;
        while(j<=(n-i+1)){
            cout<<j;
            j++;
        }
        c=2*i-2;

        while(c){
            cout<<"*";
            c--;
        }
        c=n-i+1;
        while(c){
            cout<<c;
            c--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}