#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s[200];
	cin >> s;
	int size = s.size();
	for(int i = 0; i < size; i++)
	{
		if( s[i] == 'W' || s[i] == 'E' || s[i] == 'B') 
			s[i] = ' ';
	}
	cout << s << endl;
	
}
