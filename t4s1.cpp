#include <iostream>
using namespace std;
int main()
{
	int m, n;
cout << "Enter number of n: ";
cin >> n; 
cout << "Enter number of m: ";
cin >> m;
for (int i = 0; i <= n; i++)
{ 
	for (int j = 0; j <= m; j++) 
{ 
	if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) 
cout << "#"; 
	else
		cout << "*";
}
cout << "\n";
}
return 0;
system("pause");
}