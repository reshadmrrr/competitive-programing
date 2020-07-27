#include <iostream>
#define sz(a) (int)a.size()

using namespace std;

char fun(char a, char b){
	if((a == '1' && b == '0') || (a == '0' && b == '1'))
		return '1';
	if(a == b)
		return '0';
}

int main()
{
	string num1, num2;
	cin >> num1 >> num2;
	string tmp;
	int len = sz(num1);
	for (int i = 0; i < len; ++i)
	{
		tmp += fun(num1[i], num2[i]) ;
	}

	cout << tmp << endl;



	return 0;
}
