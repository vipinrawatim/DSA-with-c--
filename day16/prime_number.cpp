#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"enter the number ";
    cin>>num;
    int c=0;
    for (int i = 2; i < num; i++)
    {
        if(num%i==0 && num!=2 ){
            c=1;
            break;
        }
    }
    if(c==1){
        cout << num << " is not prime number";
    }
    else{
        cout<<num<<" is prime number";
    }
    
    return 0;
}