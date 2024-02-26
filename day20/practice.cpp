#include <iostream>
#include<limits>
using namespace std;
int main()
{
    std::cout << "Size of int: " << sizeof(int) * 8 << " bits" << std::endl;
    std::cout << "Size of long int: " << sizeof(long int) * 8 << " bits" << std::endl;
    std::cout << "Size of long long int: " << sizeof(long long int) * 8 << " bits" << std::endl;
    std::cout << "Size of long long int: " << numeric_limits<int>::min() << endl;
    return 0;
}
