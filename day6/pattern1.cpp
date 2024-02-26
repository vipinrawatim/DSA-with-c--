#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the row ";
    cin>>n;
    char c;
    for(int i=1;i<=n;i++){
        for (int  j = 0; j < n; j++)
        {
            c='A'+i-1;
            cout<<c<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}