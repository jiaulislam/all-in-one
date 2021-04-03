#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cc = 65;
	for (cc = 65; cc < 91;)
	{
		for (int k = 0; k < 6; k++)
		{
			if (cc > 90)
				break;
			cout << char(cc) << " ";
			cc++;
		}
		cout << endl;
	}
	return 0;
}