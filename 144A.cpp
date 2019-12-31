// https://codeforces.com/problemset/problem/144/A

#include <iostream>
using namespace std;
int a, b, c = 102, arr[105], d, e, sum;
 
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        if (b < arr[i]) {
            b = arr[i];
            d = i;
        }
        if (c >= arr[i]) {
            c = arr[i];
            e = i;
        }
    }
    sum = d + (a - e - 1);
    if (d > e) {
        sum--;
    }
    cout << sum;
}
