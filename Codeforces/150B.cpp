#include <iostream>
#include <vector>
using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n; 
    cin >> n;
	vector < pair < int, string > > v; 
	for(int i=0; i<n; i++) {
		int a; 
		string s; 
		cin >> a >> s; 
		v.push_back(make_pair(a, s)); 
	}  

	cout << v[1].second << endl;  
    return 0;
}
