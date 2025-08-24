#include <iostream>
using namespace std;
void WeekPrint(int);

enum day {MON,TUE,WED,THU,FRI,SAT,SUN};
int main()
{
	day d;
	d=MON; WeekPrint(d);
	d=TUE; WeekPrint(d);
	d=WED; WeekPrint(d);
	d=THU; WeekPrint(d);
	d=FRI; WeekPrint(d);
	d=SAT; WeekPrint(d);
	d=SUN; WeekPrint(d);
	return 0;
}

void WeekPrint(int x)
{
	switch(x) {
		case 0: cout<<"MONDAY\n"; break;
		case 1: cout<<"TUESDAY\n"; break;
		case 2: cout<<"WEDNESDAY\n"; break;
		case 3: cout<<"THURSDAY\n"; break;
		case 4: cout<<"FRIDAY\n"; break;
		case 5: cout<<"SATURDAY\n"; break;
		case 6: cout<<"SUNDAY\n"; break;
	}
}
