#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; ++i ){
        cin >> a[i];
        if(i > 0 && a[i - 1] != a[i]) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}
