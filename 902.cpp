#include <iostream>
 
using namespace std;
 
int p[10001],a[10001];
 
int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
        cin >> p[i];
 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
 
    for (int i = 1; i <= n; i++)
        if(a[i] != a[p[i]])
            ans++;
 
    cout << ans;
}
