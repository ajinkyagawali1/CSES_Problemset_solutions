#include<bits/stdc++.h>
using namespace std;

int main(){

	string dna;
	int maxrep = 0;
	int count = 1;

	cin >> dna;

	int len = dna.length();

	for(int i=0; i<len-1; i++){

		if (dna[i] == dna[i+1])
		{
			count++;
			
		}else{
			maxrep = max(maxrep, count);
			count = 1;
		}
		
	} 

	maxrep = max(maxrep, count);

	cout << maxrep ;
	return 0;
}
