#include <iostream>
#include <cmath>
using namespace std;
class number {
    public:
    int decimal(int num){
        int b = 0;
        int i = 0;
        while (num != 0)
        {
            b = b + num % 10 * pow(2, i);
            i++;
            num = num / 10;
        }
        return b;
    }

};
int main()
{
    int num;
    cout << "enter the binary number ";
    cin >> num;
    number obj;
    cout << "the number is " << obj.decimal(num);

    return 0;
}