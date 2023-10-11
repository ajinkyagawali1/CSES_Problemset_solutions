#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		ll row, col;
		cin >> row >> col;

		if(row == col) cout << row*row - (row-1) << endl;
		else if(row>col){
			ll diag = row*row - (row-1);
			if(row%2!=0) cout << diag - (row-col) << endl;
			else cout << diag + (row-col) << endl;
		}
		else{
			ll diag = col*col - (col-1);
			if(col%2!=0) cout << diag + (col-row) << endl;
			else cout << diag - (col-row) << endl;
		}

	}
	return 0;
}