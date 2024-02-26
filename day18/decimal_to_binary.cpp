#include <iostream>
#include <vector>
using namespace std;
// Function to convert decimal to binary
std::vector<int> decimalToBinary(int n)
{
    std::vector<int> binary;

    // Handling the case when the number is 0
    if (n == 0)
    {
        binary.push_back(0);
        return binary;
    }

    // Convert decimal to binary
    while (n > 0)
    {
        binary.push_back(n % 2);
        n /= 2;
    }

    // Reverse the binary vector to get the correct binary representation
    // reverse(binary.begin(), binary.end());

    return binary;
}

int main()
{
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::vector<int> binaryNumber = decimalToBinary(decimalNumber);

    std::cout << "Binary representation: ";
    for (int digit : binaryNumber)
    {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}
