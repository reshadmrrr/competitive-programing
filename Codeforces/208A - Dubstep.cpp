#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, a;

    cin >> s;
    int flag = 0;
    int len = s.length();

    for(int i = 0; i < len;)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            if(flag == 0)
            {
                i += 3;
                flag = 1;
            }
            else
            {   a += ' ';
                i += 3;
            }

        }
        else
        {
            a += s[i];
            i++;
            flag = 1;
        }
    }

    cout << a << endl;

    return 0;

}
