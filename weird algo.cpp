#include<bits/stdc++.h>
using namespace std;

#define ll long long

void algo(ll n){
	
	cout << n << "\n";

	if(n == 1){
		return;
	}


	else if(n%2==0){
		return algo(n/2);
	}
	else{
		return algo(n*3+1);
	}

}

int main(){

	ll n;

	cin >> n;

	algo(n);
}
