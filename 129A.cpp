// https://codeforces.com/contest/129/problem/A

#include <iostream>
using namespace std;
 
int main() {
	int count = 0, sum = 0;
	int n;
	cin >> n;
	int arr[101];
	for (int i	= 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		//3 3 2 1 5
	}
	for (int i = 0; i < n; i++) {
		if ((sum - arr[i]) % 2 == 0) count++;
	}
	cout << count;
	return 0;
}
