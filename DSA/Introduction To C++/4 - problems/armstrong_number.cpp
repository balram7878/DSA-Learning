
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int temp = num, ans = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        temp /= 10;
        ans = ans + (rem *rem* rem);
        cout<<ans<<" "<<temp<<" "<<rem<<endl;
    }

    if (ans == num)
        cout << num << " is armstrong number";
    else
        cout << num << " is not armstrong number";

    return 0;
}