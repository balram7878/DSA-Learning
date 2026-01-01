#include <iostream>
using namespace std;
int main()
{

    int password;
    int correctPassword = 1234;
    cout << "Enter password: ";
    cin >> password;

    while (password != correctPassword)
    {
        cout << "Wrong password, try again!\n";
        cout << "Enter password: ";
        cin >> password;
    }

    cout << "Access granted!\n";

    return 0;
}