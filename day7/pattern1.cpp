#include<iostream>
using namespace std;
int main () {
    char c;
    int i=1;
    int j=1;
    int n;
    cout<<"enter the row ";
    cin>>n;
    while(i<=n){
       
        c='A'+n-i;
        j=1;
        while(j<=i){
            cout<<c<<" ";
            c=c+1;
            j++;
        }
        
        cout<<endl;
        i++;
        
    }
    return 0;
}