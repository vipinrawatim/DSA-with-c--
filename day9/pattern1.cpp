#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the row ";
    cin>>n;
    int i=1;
    int j=1;
    int k=1;
    int space;
    while(i<=n){
        space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        j--;
        k=j;
        k--;
        while(k){
            cout<<k;
            k--;
        }
i++;
cout<<endl;
    }
    return 0;
}