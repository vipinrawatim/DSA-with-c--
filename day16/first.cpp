#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    cout<<"the sum of "<<n<<" is "<<sum;
    return 0;
}