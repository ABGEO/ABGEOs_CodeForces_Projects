#include <iostream>

using namespace std;

main()
{
	int person, money, m25(0), m50(0);

    cin >> person;

	for (int i(0); i < person; i++)
	{
	    cin>>money;

	    if (money == 25)
		{
			m25++;
			continue;
		}
	    else if (money == 50)
		{
			if (m25 == 0)
			{
				cout << "NO";
				return 0;
			}
			else
			{
				m25--;
				m50++;
				continue;
			}
	    }
	    else if (money == 100)
		{
			if (m50 > 0 && m25 > 0)
			{
				m25--;
				m50--;
				continue;
			}
			else if (m25 >= 3)
			{
				m25 -= 3;
				continue;
			}

	    	cout << "NO";
			return 0;
	    }
	}

	cout<<"YES";
}
