#include <iostream>
using namespace std;
int main()
{

    int num = 1000;
    int decimal = 0, mul = 1, temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        temp /= 10;
        decimal = decimal + rem * mul;
        mul *= 2;
    }
    cout << decimal;

    return 0;
}