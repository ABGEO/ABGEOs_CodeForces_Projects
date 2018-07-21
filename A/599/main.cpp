#include <iostream>

using namespace std;

int main()
{
	int d1, d2, d3, s1, s2, s3, s4, min1, min2;

	cin >> d1 >> d2 >> d3;

	s1 = d1 + d3 + d2;
	s2 = d1 + d1 + d2 + d2;
	s3 = d1 + d1 + d3 + d3;
	s4 = d2 + d2 + d3 + d3;

	if (s1 < s2)
		min1 = s1;
	else
		min1 = s2;

	if (s3 < s4)
		min2 = s3;
	else
		min2 = s4;

	if (min1 < min2)
		cout << min1;
	else
		cout << min2;

	return 0;
}
