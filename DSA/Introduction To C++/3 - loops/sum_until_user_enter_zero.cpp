#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter 0 to exit or enter num to add up: ";
    cin >> n;
    int sum = 0;

    while (true)
    {
        if (n == 0)
            break;
        sum += n;
        cout << "num: ";
        cin >> n;
    }

    cout << sum;

    return 0;
}