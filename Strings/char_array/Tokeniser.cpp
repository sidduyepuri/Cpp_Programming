#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[40]="x=10;y=20;z=30";

	char *token=strtok(s1,";");
	while (token!=NULL)
	{
		cout<<token<<endl;
		token=strtok(NULL,";");
	}
}
