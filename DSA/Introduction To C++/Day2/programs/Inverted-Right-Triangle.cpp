#include <iostream>
using namespace std;

int main()
{
    //  int count = 1;
    // for (int i = 5; i >= 1; i--)
    // {

    //     for (int k = 1; k <= i - 1; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= count; j++)
    //     {
    //         cout << "*";
    //     }
    //     count++;
    //     cout << endl;
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}