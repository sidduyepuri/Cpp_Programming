#include <iostream>
using namespace std;
int main()
{
	string name;
	cout << "May i know your name:";
	//cin >> name; //-> it will take only string, it means after space it will neglect, better to use getline()
	getline(cin,name);
	cout << "Welcome Mr/Miss." << name << "\n";
	return 0;
}
