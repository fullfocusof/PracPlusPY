#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    cin >> size;

	vector<vector<int>> matrix;

	for (int i = 0; i < size; i++)
	{
		vector<int> temp;

		for (int j = 0; j < size; j++)
		{
			int data;
			cin >> data;
			temp.push_back(data);
		}

		matrix.push_back(temp);
	}

	for (int k = 0; k < size; ++k) 
	{
		for (int i = 0; i <= k; ++i) 
		{
			cout << matrix[k - i][i] << " ";
		}
	}

	for (int k = 1; k < size; ++k)
	{
		for (int i = 0; i < size - k; ++i)
		{
			cout << matrix[size - 1 - i][k + i] << " ";
		}
	}

	return 0;
}