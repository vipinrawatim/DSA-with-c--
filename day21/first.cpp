#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int x;
    cout<<"enter the number ";
    cin>>x;
    int p=x;
    //decimal to binary conversion
    int d=0;
    while(x!=0){
        d=x%2+d*10;
        x=x/2;
    }
    //1's complement
    int r;
    while(d!=0){
        r=d%10;
        if(r==1){
            r=0;
        }
        b=b+r*10;
       d=d/10;
    }
    //binary to decimal conversion
    int o=0;
    int i=0;
    while(b!=0){
        o=(b%10)*pow(2,i)+o;
        b=b/10;
        i++;
    }
    //output
    cout<<"the complement of "<<p<<" is "<<o;
    return 0;
}