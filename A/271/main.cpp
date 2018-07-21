#include <iostream>

using namespace std;

int main()
{
	int year, y1, y2, y3, y4;

	cin >> year;

	while (year)
	{
		year++;

		y1 = year / 1000;
		y2 = (year / 100) % 10;
		y3 = (year / 10) % 10;
		y4 = year % 10;

		if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3  && y2 != y4 && y3 != y4)
		{
			cout << year;
			return 0;
		}
	}
}
