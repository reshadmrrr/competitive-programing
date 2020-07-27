#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>


using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


vector < string >  subStringVector( string str, int sz );

int main()
{
    fast;

    string s;
    int num;
    cin >> s >> num;

    vector < string > v = subStringVector( s, s.size() ); 

    sort( v.begin(), v.end() );

    cout << v[num - 1] << endl;

    return 0;
}


vector < string >  subStringVector( string str, int n ) {
    vector < string > v;
    
    for (int len = 1; len <= n; len++)  
    {     
        for (int i = 0; i <= n - len; i++)  
        {   
            string s; 
            
            int j = i + len - 1;             
            for (int k = i; k <= j; k++) s +=  str[k];

            v.push_back( s );      
        } 

    }
    return v;
}