// https://codeforces.com/contest/32/problem/B

#include <iostream>
using namespace std;
 
int main() {
    string str;
    string ans;
    bool f = true;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            if (str[i-1] == '-' && f) {
                ans += '1';
                i++;
            } else ans += '0';
 
        } else if (str[i] == '-') {
            if (str[i + 1] == '.') {
                ans += '1';
                i++;
            }
            else {
                ans += '2';
                i++;
                f = false;
            }
        }
    }
 
    cout << ans;
    return 0;
}
