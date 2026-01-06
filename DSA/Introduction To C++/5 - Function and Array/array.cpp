#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int marks[n] = {85, 90, 78, 92, 88};
    // int sum = 0;

    // for (int i : marks)
    // {
    //     sum += i;
    // }
    // cout << sum/5.0 << endl;

    // int max = INT_MIN;
    // for (int i : marks)
    // {
    //     if (max < i)
    //         max = i;
    // }

    // cout << max << endl;

    // int target = 78;
    // int position = -1;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (marks[i] == target)
    //     {
    //         position = i;
    //     }
    // }
    // cout << position<< endl;

    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = marks[i];
    //     marks[i] = marks[n - (i + 1)];
    //     marks[n - (i + 1)] = temp;
    // }

    // for (int i : marks)
    //     cout << i << " ";

    // cout << sizeof(marks) << endl;
    // cout << sizeof(int *);

    int min = INT_MAX;

    for (int i : marks)
    {
        if (min > i)
            min = i;
    }
    cout<<min;

    return 0;
}
