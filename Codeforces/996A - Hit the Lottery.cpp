#include <iostream>

using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int a[] = { 100, 20, 10, 5, 1 };
    int num, sum = 0; 
    cin >> num;
    for( int i = 0; i < 5; i++ ){
        sum += num / a[i];
        num %= a[i];
    }
    cout << sum << endl;
    return 0;
}
