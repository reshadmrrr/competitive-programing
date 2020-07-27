#include <bits/stdc++.h>

using namespace std;


int abs(int a)
{
	if (a > 0) return a;
	else return -a;
}

int abc(int a)
{	
	int sum = 0, flag;
	if(a == 1) return 1;
	else
	{
		for(int i = 1; i <= a/2; i++)
		{
			sum += 2*i;
			flag = i+1;	
		}
		if(a%2 == 0) return sum;
		else return sum+flag;
	}
		
}


int main()
{
	int a, b;
	
	cin >> a >> b;
	
	cout << abc(abs(a-b)) << endl;
	
	return 0;
}

