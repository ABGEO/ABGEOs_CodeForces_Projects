#include <iostream>
#include <map>

using namespace std;

map <string, pair <int, string> > qvebi;

int main ()
{
  string a[] = {"null", "purple", "green", "blue", "orange", "red", "yellow"};

  qvebi["purple"].second = "Power";
  qvebi["green"].second = "Time";
  qvebi["blue"].second = "Space";
  qvebi["orange"].second = "Soul";
  qvebi["red"].second = "Reality";
  qvebi["yellow"].second = "Mind";

  int n;
  string str;

  cin >> n;

  for (int i(0); i < n; i++)
  {
    cin >> str;
    qvebi[str].first++;
  }

  cout << 6 - n << endl;

  for (int i(1); i <= 6; i++)
  {
    if (qvebi[a[i]].first == 0)
      cout << qvebi[a[i]].second << endl;
  }


  cout << endl;
  return 0;
}
