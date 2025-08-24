#include <iostream>
#include <limits>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	char str3[100];
	cout<<"Enter a string1:";
	cin>>str1;
	cout<<"string is:"<<str1<<endl;
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover newline
	//cin.ignore(); // clear leftover newline
	cout<<"Enter a string2 again:";
	cin.get(str2,50);
	cout<<"string is:"<<str2<<endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover newline
	cout<<"Enter a string3 again:";
	cin.getline(str3,50);
	cout<<"string is:"<<str3<<endl;
	
	cout<<"\n\nThanks for testing me multiple times."<<endl;
	return 0;
}
