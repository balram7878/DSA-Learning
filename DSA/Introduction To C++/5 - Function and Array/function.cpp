#include <iostream>
using namespace std;

void incr(int &n)
{
    n++;
}

void swap(int &a, int &b)
{
    // a = a + b;
    // b = a - b;
    // a = a - b;

    int temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b, int &c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void print(const string &name)
{
    cout << name;
}

bool prime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool armstrong(int n)
{

    int result = 0, temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        temp /= 10;
        result += (rem * rem * rem);
    }
    return result == n;
}

int main()
{

    // int a = 90, b = 11, c = 100;
    // cout << a << " " << b << " " << c << endl;
    // swap(a, b, c);
    // cout << a << " " << b << " " << c << endl;

    // print("John");

    // cout << prime(9);
    cout<<armstrong(5000);

    return 0;
}