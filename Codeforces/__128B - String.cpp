// code 1
// #include <iostream>
// #include <string>
// #include <vector>
// #include <set>
// #include <algorithm>



// using namespace std;

// #define endl '\n'
// #define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// string getSs( char x );
// vector < string >  getVt( string s );

// int main()
// {
//     fast;
//     string s;
//     int n;
//     cin >> s >> n;
//     vector < string > v = getVt( s );

//     for( auto u : v ) cout << u << endl;
//     // cout << v[n - 1] << endl;

//     return 0;
// }



// string getSs( char x ){
//     string s(1, x);
//     return s;
// }
// vector < string >  getVt( string s ){
//     int len = s.size();

//     vector < string > v;
//     set < string > st;
//     for( int i = 0; i < len; i++ )
//         st.insert( getSs( s[i] ) );
    
//     for( int i = 0; i < len; i++ ){
//         st.insert( s );
//         s.erase(0, 1);
//     }
//     v.assign(st.begin(), st.end());
//     sort(v.begin(), v.end());
    
//     return v;
// }


//code 2

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cstring>

// using namespace std;

// #define endl '\n'
// #define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// vector < string > substr( string s );

// int main()
// {
//     fast;
//     string s;
//     int n;
//     cin >> s >> n;
//     int sz = s.size(); 
//     char str[sz];
//     for( int i = 0; i < sz; i++ )str[i] = s[i];
//     vector < string > v = substr(s , sz);
//     sort(v.begin(), v.end());
//     cout << v[n] << endl;
//     return 0;
// }

// vector < string > substr( char s[] ,  int len ){
//     vector < string > v;
//     string str;
//     for( int i = 1; i < len; i++ )
//         for( int j = 0; j < len - i; j++ ){
//             str = "";
//             int k = j + i - 1;
//             for( int l = i; l <= k; l++ )
//                  str += s[l];
//              v.push_back(str);
//         }
//     return v;    
// }

//code3

// #include <iostream>
// #include <vector>
// #include <math.h>
// #include <algorithm>


// using namespace std;

// #define endl '\n'
// #define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// vector < string >  powerSet(vector < char > set, int set_size) 
// { 
//     unsigned int pow_set_size = pow(2, set_size); 
//     int i, j; 

//     vector < string > pow_set;
  
//     for( i = 0; i < pow_set_size; i++) {
//         string temp_str = ""; 
//         for(j = 0; j < set_size; j++) { 
//              Check if jth bit in the i is set 
//                 If set then print jth element from set 
//             if(i & (1 << j)) 
//                 temp_str += set[j]; 
//         } 
//         pow_set.push_back( temp_str ); 
//     }
//     pow_set.erase( pow_set.begin() );
//     return pow_set; 
// }

// int main()
// {
//     fast;
//     string s; int n;
//     cin >> s >> n;
//     vector < char > v (s.begin(), s.end());
//     vector < string > out_v = powerSet( v, v.size() );
//     sort( out_v.begin(), out_v.end() );
//     for( auto u : out_v ) cout << u << endl;
//         cout<<"\n";
//     cout << out_v[n] << endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

#define endl '\n'
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector < string > ss( string s ){
    unsigned int sz = s.size();
    vector < string > v;
    string tmp_s = "";
    for( unsigned int i = 1; i <= sz; i++ ){
        for( unsigned int j = 0; j <= sz - i; j++ ){
            unsigned int l = i + j - 1;
            for( unsigned int k = j; k <= l ; k++ ){
                tmp_s += s[k]; 
            }
            v.push_back( tmp_s );
            tmp_s = "";
        }
    }
    return v;
}

int main()
{
    fast;
    string s;
    unsigned int n;
    cin >> s >> n;
    vector < string > vs = ss( s );
    sort( vs.begin(), vs.end() );
    // for( auto u : vs ) cout << u << endl;
    cout << vs[n - 1] << endl;

    return 0;
}
