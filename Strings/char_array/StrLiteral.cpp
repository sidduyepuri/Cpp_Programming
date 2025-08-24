#include <iostream>
using namespace std;

int main()
{
	char str1[10] = "Hello";
	char str2[] = "Hello";
	char str3[] = {'H','e','l','l','o','\0'};
	char str4[10] = "Hello";

	cout<<str1<<endl;	
	cout<<str2<<endl;	
	cout<<str3<<endl;	
	cout<<str4<<endl;	
	//char *ptr = "Hello";	
	//cout<<(void*)&str[0]<<endl;
	//cout<<(void*)&ptr<<endl;
	
	return 0;
}
