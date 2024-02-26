#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the row ";
    cin >> n;
    int i = 1;
    int j = 1;
    char c;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}