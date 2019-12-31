// https://codeforces.com/contest/401/problem/A

#include <iostream>
using namespace std;
 
int main() {
	int n, x, sum = 0;
	int ans = 1;
	cin >> n >> x;
	int arr[1001];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
 
	if (sum < 0) sum *= -1;
	
	while (sum > 0) {
		sum -= x; // 3 on it#1, 1 on it 2
		ans++;
	}
		
	cout << ans - 1;
	return 0;
}
