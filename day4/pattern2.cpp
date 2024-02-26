#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "enter the number of row ";
    cin >> n;
    int i = 1;
    int j = 1;
    int p = 1;
    while (i <= n)
    {
        j = 1;
        p = i;
        while (j <= i)
        {
            cout << p << " ";
            p--;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}