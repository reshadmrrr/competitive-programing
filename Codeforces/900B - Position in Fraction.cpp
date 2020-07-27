#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double d = (int) a/b;

    string s, t;
    ostringstream convert;
    convert << d;
    s = convert.str();
    convert << c;
    t = convert.str();

    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == t[0])
        {
            cout << i - 1 << endl;
            break;
        }

    }




	return 0;
}
