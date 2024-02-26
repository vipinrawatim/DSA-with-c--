#include<iostream>
using namespace std;
int main () {
    int a[4]={2,33,44,5};
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of an index at "<<i<<" is "<<a[i]<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        a[i]=i*2;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of an index at " << i<<" is "<< a[i] <<endl;
    }
    
    return 0;
}