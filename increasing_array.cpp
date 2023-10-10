#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	ll count = 0;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];	
	}

	for (int i = 1; i < n; ++i)
		{
			if (arr[i]<=arr[i-1])
			{
				count+=arr[i-1]-arr[i];
				arr[i] = arr[i-1];
			}
		}	

	cout << count;
	return 0;
}