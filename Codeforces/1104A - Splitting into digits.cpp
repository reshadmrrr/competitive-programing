#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int n, i = 9;
    cin >> n;
    vector < int  > v;
    if( n < i) i = n;
    while( n > 0 ){
        if( n - i >= 0){
            n -= i;
            v.push_back( i );
        }
          else --i;
    }
    cout << v.size() << "\n";
    for( int i = v.size() - 1; i >= 0; --i )
        cout << v[i] << " ";

    cout << "\n";

    return main();
}
