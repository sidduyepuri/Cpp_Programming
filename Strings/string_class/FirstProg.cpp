#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string str="Hello";
	string str;
	cout<<"Enter a string:";
	//cin>>str;
	getline(cin,str);

	cout<<str<<endl;
	return 0;
}
