#include <iostream>
#include <string>

using namespace std;

int main()
{
	int counter(0);

	int lett[300] = {0};

	string str;

	getline(cin, str);

	for (int i(0); i < str.length(); i++)
		lett[(int)str[i]]++;

	for (int i(97); i <= 122; i++)
		if (lett[i] > 0)
			counter++;

	cout << counter;

	return 0;
}
