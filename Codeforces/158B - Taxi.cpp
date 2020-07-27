#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, s1=0, s2=0, s3=0, s4=0, sum=0;

    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s == 1) s1++;
        else if(s == 2) s2++;
        else if(s == 3) s3++;
        else s4++;

    }
    sum += s4;
    s4 = 0;

    sum += s2/2;
    s2 %= 2;

    if(s1 >= s3)
    {
       sum += s3;
       s1 -= s3;
       s3 = 0;
       sum += s1/4;
       s1 %= 4;

       if(s1 + s2*2 > 0 && s1 + s2*2 <= 4)
       {
           sum++;
           s1 = 0;
           s2 = 0;
       }
       else if(s1 == 3 && s2 == 1)
       {
            sum += 2;

       }
    }
    else if(s1 < s3)
    {
        sum += s1;
        s3 -= s1;
        s1 = 0;
        sum += s3 + s2;

    }
    cout << sum << endl;

    return 0;

}


/*
 solution 158B – Taxi
Date: August 12, 2017
Author: Harun-or-Rashid
0 Comments
problem link–http://codeforces.com/problemset/problem/158/B


Harun-or-Rashid

CSEDU-23rd Batch



By coder_87, contest: VK Cup 2012 Qualification Round 1, problem: (B) Taxi, Accepted, #

#include <stdio.h>


int main()
{
    int n, s, count[5]= {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}

*/
