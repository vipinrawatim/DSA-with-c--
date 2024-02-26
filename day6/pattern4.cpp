#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "enter the row ";
    cin >> n;
    int i = 1;
    int j = 0;
    char c;
    while(i<=n){
        j=0;
        while(j<n){
            c='A'+i+j-1;
            cout<<c<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}