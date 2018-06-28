#include <iostream>
#include <map>

using namespace std;

int main ()
{
  map <string, int> mp = {
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20}
  };

  int ans(0), n;
  string str;

  cin >> n;

  for (int i(0); i < n; i++)
  {
    cin >> str;
    ans += mp[str];
  }

  cout << ans;

  cout << endl;
  return 0;
}
