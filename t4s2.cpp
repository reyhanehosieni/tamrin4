#include<iostream>
using namespace std;
int main()
{

	{
		int i, n, m = 0, f = 1;
		cout << "pls int n";
		cin >> n;
		for (i = 1; i <= n; i++)
		{
			f = f* i;
			if (f == n)
			{
				cout << "Yes";
				m = 1;
				break;
			}
		}
		if (m == 0)
			cout << "No";
	}
}