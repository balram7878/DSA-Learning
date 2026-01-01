#include <iostream>
using namespace std;
int main()
{

    int decimal = 256;
    int temp = decimal, binary = 0, mul = 1;
    while (temp > 0)
    {
        int rem = (temp % 2);
        // rem=temp&1;
        mul *= 10;
        temp /= 2;
        // temp=temp>>1;
        binary = binary + (rem * mul);
    }

    cout << binary;

    return 0;
}