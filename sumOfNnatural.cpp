#include <iostream>
using namespace std;

int sumofN(int n)
{
	int sum = n*(n+1)/2;
	return sum;
}

int main()
{
	int n;
	cout << "Enter N value:";
	cin >> n;
	int sum = sumofN(n);
	cout << "Sum of N natural is:" << sum << endl;
	return 0;
}
