#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int N)
{
    if (N < 0)
        return false;   // Armstrong numbers are non-negative

    int original = N;
    int temp = N;
    int digits = 0;

    // Step 1: Count digits
    if (temp == 0)
        digits = 1;
    else
    {
        while (temp > 0)
        {
            temp /= 10;
            digits++;
        }
    }

    // Step 2: Calculate sum of powers
    temp = N;
    int sum = 0;

    while (temp > 0)
    {
        int lastDigit = temp % 10;
        sum += (int)pow(lastDigit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int N;
    cin >> N;

    if (isArmstrong(N))
        cout << "True";
    else
        cout << "False";

    return 0;
}