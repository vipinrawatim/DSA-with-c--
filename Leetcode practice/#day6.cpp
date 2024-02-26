#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    cin.ignore();
    string s[n];
    int c = 1;
    string k[5];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the name ";
        getline(cin, s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + 1 < n; j++)
        {
            if (s[0][0] == s[j][0])
            {
                c = 2;
            }

            if (c != 1)
            {
                c = 0;
                break;
            }
        }
        if (c == 2)
        {
            k[i] = s[i][0];
        }
    }
    if (c == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << k[i];
        }
    }
    return 0;
}