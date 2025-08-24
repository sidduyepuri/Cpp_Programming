/* * This program will cover all the String operations in C++ 
   * Author 	  : YEPURI SIDDU
   * Last updated : 24-Aug-2025
				
This program covers below mentioned function in String "Class";
1. str.length();
2. str.size();
3. str.capacity();
4. str.resize();
5. str.max_size();
6. str.clear();
7. str.empty();
8. str.append();
9. str.insert();
10. str.replace();
11. str.erase();
12. str.push_back();
13. str.pop_back();
14. str1.swap(str2);
15. str.copy(str);
16. str.find(str or char);
17. str.rfind(str or char);
18. str.find_first_of();
19. str.find_last_of();
20. str.substr(start,number);
21. str.compare(str2);
22. str.at(n);
23. str.front();
24. str.back();
25. str[n];
26. str1 + str2 (like concantinate)
27. str1 = str2 (like str copy)
*/

/* ---- HEADER FILES ----------- */
#include <iostream>
#include <string>
using namespace std;

/* ------------ MAIN FUNCTION ------------------- */
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
	cout<<"string but taken which occurance is first comes that index, Found_first_of at index:"<<str.find_first_of("la")<<endl;
	cout<<"Found_first_of with index parameter at index:"<<str.find_first_of('y',3)<<endl;
	cout<<"Found_last_of index at the end:"<<str.find_last_of('y')<<endl;

	cout<<"Sub String Print index-3 N=10:"<<str.substr(3,10)<<endl;
	/* -------------------- String compare start-------------------- */
	string cmp1;
	string cmp2;
	int diff;
	cout<<"Enter string1:";
	getline(cin,cmp1);
	cout<<"Enter string2:";
	getline(cin,cmp2);
	
	if((diff=cmp1.compare(cmp2))==0)
		cout<<"Both strings are same"<<endl;
	else
		cout<<"strings are Not same: Diff is:"<<diff<<endl;
	/* -------------------- String compare end -------------------- */

	/* -------------------- String operators   -------------------- */
	int index;
	cout<<"Enter String:";
	getline(cin,str);
	cout<<"Enter at() index:";
	cin>>index;
	cout<<"Character at index:"<<index<<" is:"<<str.at(index)<<endl;
	
	cout<<"Character at index:"<<index<<" using []:"<<str[index]<<endl;
	str[index]='S';
	cout<<"===Character at index:"<<index<<" is modifying using []:"<<str[index]<<"\nModified String:"<<str<<"==="<<endl;
	
	string Add1="Hello";
	string Add2=" World";
	Add1 = Add1 + Add2;
	cout<<"string concatinated using + :"<<Add1<<endl;

	Add2 = Add1;
	cout<<"String coping using '=': Both the strings are: String1:"<<Add1<<" String2:"<<Add2<<endl;
	/* -------------------- String operators Ended  -------------------- */
	
	cout<<"\nThanks for executing....."<<endl;
	return 0;
}
