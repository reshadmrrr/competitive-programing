#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0, temp = -99999999;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i > 0){
            if(a[i] > temp)
                flag++;
        }
        temp = a[i];
    }
    if(n == 1)
        cout << '0' << endl;
    else if(n == 2)
        cout << flag + 1 << endl;
    else
        cout << flag << endl;

    return 0;

}

