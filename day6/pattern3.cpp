#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "enter the row ";
    cin >> n;
    int i = 1;
    int j = 1;
    int x=0;
    char c;
    while(i<=n){
    j=1;
    while(j<=n){
        c='A'+x;
    cout<<c<<" ";
    j++;
    x++;
    }
    i++;
    cout<<endl;

    }
    return 0;
}