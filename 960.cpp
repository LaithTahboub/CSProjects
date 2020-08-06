#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <set>
#include <cmath>
#include <utility>
#include <array>
#include <string>
#include <vector>
using namespace std;
 
int sum(const int arr[], int x, int y) {
    int sum = 0;
    for (int i = x; i < y; i++) {
        sum += arr[i];
    }
    return sum;
}
 
int main() {
    string str;
    cin >> str;
    bool flag = true;
    string s;
    for (char c : str)
        s += c;
    sort(s.begin(), s.end());
    for (int i = 0; i < str.length(); i++)
        if (str[i] != s[i]) {
            cout << "NO";
            return 0;
        }
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] > str[i + 1]) {
            flag = false;
            break;
        }
    }
    if (!flag)
        cout << "NO";
    else {
        int a = 0, b = 0, c = 0;
        for (char ch : str) {
            if (ch == 'a')
                a++;
            else if (ch == 'b')
                b++;
            else
                c++;
        }
        if ((c == b || c == a) && a >= 1 && b >= 1)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
