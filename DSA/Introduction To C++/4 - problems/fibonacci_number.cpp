#include <iostream>
using namespace std;

// int fibonacci(int n)
// {
//     if (n<= 1)
//         return n;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

int main()
{
    int n;
    cin >> n;
    // cout << n << " fibonacci number: " << fibonacci(n);
    // return 0;
    if (n <= 1)
    {
        cout << n;
        return 0;
    }

    int first = 0, second = 1;
    for (int i = 2; i < n; i++)
    {
        int current = first + second;
        first = second;
        second = current;
    }
    cout << second;
}