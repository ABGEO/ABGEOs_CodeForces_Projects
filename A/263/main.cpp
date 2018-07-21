#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int matrix[5][5], iN(0), jN(0), count(0);

	for (int i(0); i < 5; i++)
	{
		for (int j(0); j < 5; j++)
		{
			cin >> matrix[i][j];

			if (matrix[i][j] == 1)
			{
				iN = i+1;
				jN = j+1;
				break;
			}
		}
	}

	count = abs(iN - 3) + abs(jN - 3);

	cout << count;

	return 0;
}
