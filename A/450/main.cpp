#include <iostream>
#include <queue>

using namespace std;

struct st1 {
	int ChID;
	int ChNeed;
	int ChHave = 0;
} str1;

queue <st1> q1;

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i(1); i <= n; i++)
	{
		int x;
		cin >> x;

		str1.ChID = i;
		str1.ChNeed = x;

		q1.push(str1);
	}

	while (q1.size() > 0)
	{
		if (q1.size() == 1)
		{
			str1 = q1.front();
			cout << str1.ChID;
			return 0;
		}
		else
		{
			str1 = q1.front();
			q1.pop();

			str1.ChHave += m;

			if (str1.ChHave < str1.ChNeed)
				q1.push(str1);
		}
	}

	return 0;
}
