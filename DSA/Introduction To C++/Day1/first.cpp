#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    bool adult = true;
    float b = 4.3;
    char c = 'd';
    // cout<<sizeof(a)<<":"<<sizeof(adult)<<":"<<sizeof(b)<<":"<<sizeof(c);
    // cout<<"\n"<<sizeof("hello world");
    string str = "John Kite";
    // cout << str.length();
    string firstName = "Rohit";
    string lastName = "Sharma";
    string fullName = firstName + " " + lastName;
    // cout<<fullName<<endl;

    string input;
    getline(cin,input);
    cout<<input;

    return 0;
}