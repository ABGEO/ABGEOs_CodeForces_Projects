#include <iostream>
#include <map>

using namespace std;

int n, m, d[100005];

pair <int, int> q[100005];

map <int, int> dm;
map <int, int> nms;
map <int, int>::iterator iter;

int main ()
{
  cin >> n >> m;

  for (int i(1); i <= n; i++)
  {
    cin >> d[i];
    dm[d[i]]++;
  }

  for (int i(0); i < m; i++)
    cin >> q[i].first >> q[i].second;

  for (int z(0); z < m; z++)
  {
    int x(0);

    for (int i(q[z].first); i < q[z].second; i++)
    {
      if (nms[d[i]] > 0)
        continue;

      if (dm[d[i]] == d[i])
        x++;

      nms[d[i]]++;
    }

    iter = nms.begin();
    while (iter != nms.end())
      nms.erase(iter++);

    cout << x << endl;
  }

  return 0;
}
