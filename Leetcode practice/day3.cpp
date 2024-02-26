#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    int r=0;
   
    int final = num;
    while(num!=0){
        r=r*10+num%10;
        num=num/10;
    }
    if(r==final){
        cout<<final<<" is palindrome number ";
    }
    
    return 0;
}