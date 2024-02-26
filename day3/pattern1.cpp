#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the row ";
    cin>>n;
    int i=1;
    int j=1;
    int a=1;
    while(i<=n){
       a=1;
        while(a<=i){
            cout<<j<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}