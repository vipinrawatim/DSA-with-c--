#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "enter the number of row ";
    cin >> n;
    int con;
    int i = 1;
    int j = 1;
    while(i<=n){
        j=1;
        con=n-i+1;
        while(j<=con){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}