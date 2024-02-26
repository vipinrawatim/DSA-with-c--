#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the row ";
    cin>>n;
    int j=1;
    for (int i = 1; i<=n; i++)
    {
        j=1;
        while (j<=i)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
    }
    
    return 0;
}