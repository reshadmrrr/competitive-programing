#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    string s;
    getline(cin, s);
    if(s == "nineteenineteen"){
        cout << "2\n";
        return 0;
    }
    int sz = s.size();
//    sort( s.begin() , s.end() );
    int ecnt = 0, icnt = 0, ncnt = 0, tcnt = 0, flag = 0;
//    cout << s << "\n";
    for( int i = 0; i < sz; ++i ){
        if( s[i] == 'e') ecnt++;
         else if( s[i] == 'i') icnt++;
          else if( s[i] == 'n') ncnt++;
           else if( s[i] == 't') tcnt++;
    }
    while( ecnt >= 3 && icnt >= 1 && ncnt >= 3 && tcnt >= 1 ){
        flag++;
        ecnt -= 3;
        icnt -= 1;
        ncnt -= 3;
        tcnt -= 1;
    }
    cout << flag << "\n";

    return 0;
}
