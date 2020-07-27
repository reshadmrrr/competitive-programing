#include <iostream>
#include <string>


using namespace std;

int main()
{
    string num;
    cin >> num;
    int flag = 0;
    int len = num.length();

    for(int i = 0; i < len; ++i){
        if(num[i] != '1' && num[i] != '4')
            flag++;
        if(num[0] == '4')
            flag++;
        if(i >= 2){
           if(num[i] == '4' && num[i-1] == '4' && num[i-2] == '4')
                flag++;
        }

    }
    if(flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
