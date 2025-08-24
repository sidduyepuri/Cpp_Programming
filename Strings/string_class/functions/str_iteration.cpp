#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str="today";
	
	/* forward iteration */
	/* string::iterator it;
	
	for(it=str.begin();it!=str.end();it++)
	{
		*it=*it-32;
	}
	cout<<str<<endl; */
	
	/* Reverse iteration */
	string::reverse_iterator it;
	
	for(it=str.rbegin();it!=str.rend();it++)
	{
		cout<<*it;
		*it=*it-32;
	}
	cout<<endl<<str<<endl;
	
	return 0;
}
