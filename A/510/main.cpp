#include <iostream>

using namespace std;

int main()
{
	int n, m, z = 0;

	cin >> n >> m;

	for (int i(0); i < n; i++)
	{
    if (i % 2 == 0)
    {
  		for (int j(0); j < m; j++)
          cout << "#";
    }
    else
    {
      if (z % 2 != 0)
        cout << "#";

      for (int j(0); j < m-1; j++)
        cout << ".";

      if (z % 2 == 0)
        cout << "#";

      z++;
    }
    cout << "\n";
	}

	return 0;
}
