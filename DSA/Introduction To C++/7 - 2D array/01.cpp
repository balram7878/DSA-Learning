#include<iostream>
#include<string>
using namespace std;
void toLower(string &s) {
    // Your code here
	string result="";
    // cout<<"Original string: "<<s<<endl;
    // cout<<"string length: "<<s.length()<<endl;
	for(int i=0; i<s.length(); i++){
        cout<<int(s[i])<<endl;
		if(int(s[i])>=65 && int(s[i])<=90){
		result[i]=(int(int(s[i])+32));
        cout<<result;
        }
		else
		result[i]=s[i];
        cout<<result;
	}
	cout<<result;

}
int main(){
    cout<<"Convert string to lowercase"<<endl;
    // cout<<int('Z')<<endl;
    string s="Hello";
    toLower(s);
    return 0;
}