#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num == 0)
    {
        cout << 0;
        return 0;
    }
    if (num == 1)
    {
        cout << 1;
        return 0;
    }

    int sqrt = 0;

    for (int i = 1; i * i <= num; i++)
    {
        sqrt = i;
    }

    cout << sqrt;

    return 0;
}