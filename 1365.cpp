#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
bool isSorted(int arr[], int n) {
    int x[n];
    for (int i = 0; i < n; i++)
        x[i] = arr[i];
    sort(x, x + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] != x[i])
            return false;
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        bool ok = false;
        if (brr[0] == 1) {
            for (int i = 1; i < n; i++) {
                if (brr[i] == 0) {
                    ok = true;
                    break;
                }
            }
        }
        else {
            for (int i = 1; i < n; i++) {
                if (brr[i] == 1) {
                    ok = true;
                    break;
                }
            }
        }
 
        if (isSorted(arr, n))
            cout << "Yes\n";
        else if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
