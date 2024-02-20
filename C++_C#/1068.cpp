#include <iostream>

using namespace std;

int main()
{
	int limit, result = 0;
	cin >> limit;

	if (limit <= 0)
	{
		for (int i = limit; i <= 1; i++)
		{
			result += i;
		}
	}
	else if (limit > 0)
	{
		for (int i = 1; i <= limit; i++)
		{
			result += i;
		}
	}

	cout << result;

	return 0;
}