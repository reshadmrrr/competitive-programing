#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, flag+;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; ++i){
        cin >> str[i];
        if(i != 0){
            if(str[i] == str[i - 1])
                flag++;
        }
    }
}
.
