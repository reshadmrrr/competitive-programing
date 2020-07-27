#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;
    while(1)
    {
        year++;
        int a = year / 1000;
        int b = (year % 1000) / 100;
        int c = (year % 100) / 10;
        int d = year % 10;

        if(a != b && a != c && a != d && b != d && b != c && c != d)
        {
            cout << a << b << c << d;
            return 0;
        }


    }




}
