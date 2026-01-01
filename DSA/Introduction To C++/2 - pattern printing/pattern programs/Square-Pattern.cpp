#include <iostream>
using namespace std;

int main()
{
    int n=5;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "*****" << endl;
    // }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Print 5x5 square of stars
// *****
// *****
// *****
// *****
// *****
