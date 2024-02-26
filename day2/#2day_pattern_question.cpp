#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the row ";
    cin >> n;
    int r = 0;
    int j=1;
    for (int i = 0; i < n; i++)
    {
        r = 0;
        while (r < n)
        {
            cout << j << " ";
            j++;
            r++;
        }
        cout << endl;
    }

    return 0;
}