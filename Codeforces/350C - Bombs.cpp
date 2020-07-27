#include <iostream>
#include <vector>
#include <string.h>

using namespace std; 

int main()
{
	int n; 

	
	cin >> n; 
	
	int a[n][1];
	// vector <String> v; 
	int l = 0, r = 0, u = 0, d = 0;

	for (int i = 0; i < n; ++i)		cin >> a[i][0] >> a[i][1];	

	for (int i = 0; i < n; ++i)
	{
		 
		if( a[i][0] >= 0 ) 	{r = a[i][0]; } 
		else   			l = abs( a[i][0] );
		if( a[i][1] >= 0 ) 	u = a[i][1];
		else 			d = abs(  a[i][1] );

	}

	cout << l <<" " <<r << "  " << u << " " << d << endl; 

	return 0;
}		



