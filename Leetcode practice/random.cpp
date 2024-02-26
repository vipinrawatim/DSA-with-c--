#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    string s;
    cout << "enter the roman number ";
    getline(cin, s);
   
    map<char, int> variables;
    variables['L'] = 50;
    variables['X'] = 10;
    variables['C'] = 100;
    variables['D'] = 500;
    variables['M'] = 1000;
    variables['I'] = 1;
    variables['V'] = 5;
    int sum =0;
    for (int i = 0; i < s.length(); i++)
    {
            if (variables[s[i]] < variables[s[i + 1]])
            {
                sum = sum - variables[s[i]];
            }
          
            else
            {
                sum = sum + variables[s[i]];
            }
        }
    if(sum!=0){
        cout << "the number is " << sum;
    }
    else{
        cout<<"the roman number you enter is not valid ";
    }
    return 0;
}
