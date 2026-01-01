#include <iostream>
using namespace std;
int main()
{

    int num = 23456, sum = 0;
    int temp = num;

    while (temp > 0)
    {
        int rem = temp % 10;
        temp /= 10;
        sum = sum * 10 + rem;
    }
    cout << sum;

    return 0;
}