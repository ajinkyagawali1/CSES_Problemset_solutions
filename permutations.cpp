#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(int argc, char const *argv[])
 {
 	ll n;

 	cin >> n;


 	if(n==1){cout << 1;}
	else if(n<4){cout << "NO SOLUTION";}
	else if(n==4){cout << "2 4 1 3";}
	else{
		for (int i = 1; i <= n; i+=2){cout << i <<" ";}
		for (int i = 2; i <= n; i+=2){cout << i <<" ";}	
	}


 	return 0;
 } 
