#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of row ";
    cin >> n;
    int space;
    int i = 1;
    int j = 1;
    int k=1;
    while (i <= n)
    {
        space = n - i;
        j = 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        while (j <= i)
        {
            cout << k;
            j++;
        }
        i++;
        k++;
        cout << endl;
    }
    return 0;
}