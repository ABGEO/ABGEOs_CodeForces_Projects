#include <iostream>
#include <map>

using namespace std;

int main ()
{
  map <string, int> unames;

  int n;
  string str;

  cin >> n;

  for (int i(0); i < n; i++)
  {
    cin >> str;

    if (unames[str])
      cout << str << unames[str];
    else
      cout << "OK";

    cout << endl;
    unames[str]++;
  }

  cout << endl;
  return 0;
}
