#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, flag = 0;
	cin >> n;
	while (n/10 != 0)
	{
		n /= 10;
		flag++;
	}
	
	cout << flag << endl;
	
	return main();
	
}
		
