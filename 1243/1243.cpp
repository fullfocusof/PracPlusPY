#include <iostream>

using namespace std;

int main()
{
	string value;
	cin >> value;

	int remainder = 0;

	for (auto digit : value)
	{
		int curDigit = digit - '0';
		int curNum = remainder * 10 + curDigit;
		int quotient = curNum / 7;
		remainder = curNum % 7;
	}

	cout << remainder;

	return 0;
}