#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, flag = 0;

    cin >> n >> m;

    while (n*m != 0)
    {
        flag++;
        --n;
        --m;
    }

    if(flag % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
        cout << "Akshat" << endl;

    return 0;


}
