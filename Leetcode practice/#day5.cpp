#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the number of element in an array ";
    cin>>n;
    string s[n];
    string z;
    for (int i = 0; i < n; i++)
    {
       cout<<"enter the string at index "<<i<<" ";
       getline(cin,s[i]);
    }
    for (int i = 0; i < n; i++)
    {
       if(s[i][0]==s[i+1][0]){
        z=s[i][0];
       }
    }
    cout<<"the string is "<<z;
    return 0;
}