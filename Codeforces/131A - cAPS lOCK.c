#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin << str;

    len = str.length();

    for(int i = 0; i < len; i++)
    {
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] = str[0] - 32;
        else
        str[i] = str[i] + 32;
    }
    cout << str << endl;

    return 0;
}
