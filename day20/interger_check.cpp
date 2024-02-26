#include <iostream>
#include <limits>

bool isWithin32BitRange(long long num)
{
    return num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max();
}

int main()
{
    long long userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    if (isWithin32BitRange(userInput))
    {
        std::cout << "Number is within the 32-bit integer range." << std::endl;
        // Do something with the number
    }
    else
    {
        std::cout << "Number exceeds the 32-bit integer range." << std::endl;
        // Return 0 or handle the case where the number exceeds the range
    }

    return 0;
}
