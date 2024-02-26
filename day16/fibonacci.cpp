#include<iostream>
using namespace std;
int main () {
    int a=0;
    int b=1;
    int c;
    int n;
    cout<<"how many terms should print of fiboncci series ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (size_t i = 0; i <n-2; i++)
    {
        c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
    }
    return 0;
}