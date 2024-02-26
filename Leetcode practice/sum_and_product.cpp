#include <iostream>
using namespace std;
class Solution
{
public:
    int p;
    int sum;
    int sub(int n)
    {
        p = 1;
        sum = 0;
        while (n != 0)
        {
            p = n % 10 * p;
            sum = n % 10 + sum;
            n = n / 10;
        }
        return (p-sum);
    }
};
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    Solution obj;
    cout << "the subtraction of product and sum of the number is " << obj.sub(n);
    return 0;
}