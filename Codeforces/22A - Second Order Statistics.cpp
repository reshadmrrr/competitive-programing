#include <iostream>
#include <set>
#include <vector>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    short int n, a;
    set < short int > st; 
    cin >> n;
    while( n-- ) {cin >> a; st.insert( a );}
    if( st.size() == 1 ) {cout << "NO" << endl; return 0;}
    vector < short int > v;
    v.assign(st.begin(), st.end());
    cout << v[1] << endl;    
    return 0;
}
