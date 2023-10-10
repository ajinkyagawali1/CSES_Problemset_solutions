#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n, num;
	ll nsum = 0;

	cin >> n;

	for(int i=0; i<n-1; ++i){
		cin >> num;
		nsum = nsum+num; 
	}

	ll sum = (n*(1+n))/2;

	cout << sum - nsum;
	return 0;
}
