#include <iostream>

using namespace std;

int main()
{
	int n, flag = 0;
	cin >> n;
	int t = 2 * n;
	int a[t];
	for (int i = 0; i < t; ++i)
		cin >> a[i];
    for(int i = 1; i < t; ++i){
        if(a[i] != a[i-1])
            flag++;
       // else
         //   flag--;
    }
        cout << t -flag << endl;


	return 0;
}
