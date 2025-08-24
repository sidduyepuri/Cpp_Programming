#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	//string str=nullptr; //-> RUN time ERROR.
	cout<<"Enter a string:";
	getline(cin,str);
	
	/* -------------------  Basic String Functions are below ------------------------ */
	cout<<"Length of the string is "<<str.length()<<endl;
	cout<<"Size of the string is "<<str.size()<<endl;
	
	//str.resize(55);
	cout<<"capacity of the string is "<<str.capacity()<<endl;
	cout<<"maxsize of the string is "<<str.max_size()<<endl;
	
	//str.clear();
	//cout<<"Length of the string is "<<str.length()<<endl;
	
	if(str.empty())
		cout<<"String is empty."<<endl;

	cout<<"String: "<<str<<endl;
	/* --------------------  Basic functions ended ---------------------------------- */

	/* --------------------  Functional operations on Strings ------------------------*/
	cout<<"Append Bye to String:"<<str.append(" Bye")<<endl;
	cout<<"insertion to String:"<<str.insert(3,"kk")<<endl;
	cout<<"replace String:"<<str.replace(3,2,"aa")<<endl;
	
	//str.erase(); // it is like str.clear();
	//cout<<"String: "<<str<<endl;
	
	str.push_back('z');
	cout<<"String After push_back: "<<str<<endl;
	
	str.pop_back();
	cout<<"String After pop_back: "<<str<<endl;

	string sw1="Hello";
	string sw2="world";
	
	cout<<"Before swap:===============\nString1:"<<sw1<<"\nString2:"<<sw2<<endl;
	sw1.swap(sw2);
	cout<<"After swap:================\nString1:"<<sw1<<"\nString2:"<<sw2<<endl;
	/* ---------------------- Functional operations ended ---------------------------*/

	/* String copy */
	char strCp[200];
	int n=5;
	str.copy(strCp,str.length()); //Copies entire string
	cout<<"Entire String copy:"<<strCp<<endl;
	//strCp[str.length()]='\0';

	str.copy(strCp,n); //Copies n number of charactes, here n=5, it won't append NULL at the end.
	strCp[n]='\0';
	cout<<"N charactes are copied:"<<strCp<<endl;
	/* String copy ends */
	
	cout<<"Found at index:"<<str.find("how")<<endl;
	cout<<"Found at index:"<<str.find('y')<<endl;
	cout<<"Found index at the end:"<<str.rfind('y')<<endl;
	cout<<"Not Found at index:"<<str.find('x')<<endl; // if not found it will return out of length of string
	cout<<"Found_first_of at index:"<<str.find_first_of('y')<<endl;
	cout<<"Found_first_of with index parameter at index:"<<str.find_first_of('y',3)<<endl;
	cout<<"Found_last_of index at the end:"<<str.find_last_of('y')<<endl;

	cout<<"\nThanks for executing....."<<endl;
	return 0;
}
