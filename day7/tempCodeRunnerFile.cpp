#include<iostream>
using namespace std;
int main () {
    char c='A';
    int i=1;
    int j=1;
    int n;
    cout<<"enter the row ";
    cin>>n;
    while(i<=n){
       
        c=c+n-1;
        j=1;
        while(j<=i){
            cout<<c<<" ";
            c=c+j;
            j++;
        }
        
        cout<<endl;
        i++;
        
    }
    return 0;
}