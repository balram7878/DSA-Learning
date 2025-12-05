#include <iostream>
using namespace std;
int main()
{
    int rows = 3;    // rows
    int columns = 9; // columns
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= columns; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

//   *   *
//  * * * *
// *   *   *
