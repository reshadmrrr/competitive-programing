#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string s[] = {"Sheldon" , "Leonard" , "Penny" , "Rajesh" , "Howard"};
    int n;
    cin >> n;
    --n;
    while( n >= 5){
        n -= 5;
        n /=2;
    }

    cout << s[n] << "\n";

    return 0;
}
