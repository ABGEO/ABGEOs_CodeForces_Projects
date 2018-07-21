#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;

	sort(str.begin(), str.end());
  str.erase(unique(str.begin(), str.end()), str.end());

	if (str.length() % 2 == 0)
		cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";

	return 0;
}
