#include <iostream>
#include<limits>
using namespace std;
class solution
{
public:
    int reverse( long long int n)
    {
        long long int num = 0;
        while (n != 0)
        {
            num = num * 10 + n % 10;
            n = n / 10;
        }
        if ((num >= (numeric_limits<int>::min())) && (num<= (numeric_limits<int>::max())))
        {
            return num;
        }
        else{
            return 0;
        }
        
    }
};
int main()
{
    long long int num;
    cout << "enter the number ";
    cin >> num;
    solution x;
    cout << "the reverse number is " << x.reverse(num) << endl;
    return 0;
}