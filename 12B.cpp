#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
bool strContainsChar(const string &s1,const char &c) {
    for (char i : s1)
        if (i == c)
            return true;
    return false;
}
bool strContainsStr(const string &s1, const string &s2) {
    return s1.find(s2) != string::npos;
}
 
int main() {
    string n;
    vector<int> x;
    cin >> n;
    vector<int> arr;
    string f;
    cin >> f;
    int m = f.length();
    if (m != n.length())
        cout << "WRONG_ANSWER";
    else {
        if (m == 1) {
            if (f == n) {
                cout << "OK";
                return 0;
            } else {
                cout << "WRONG_ANSWER";
                return 0;
            }
        }
        for (char c : f) {
        x.push_back(c - '0');
        }
        for (int i = 0; i < n.size(); i++) {
            arr.push_back(n[i] - '0');
        }
        sort(arr.begin(), arr.end());
        int z = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                arr.erase(arr.begin() + i);
                z++;
            }
        }
        while (z--) {
            arr.insert(arr.begin() + 1, 0);
        }
        bool ok = true;
        for (int i = 0; i < arr.size(); i++) {
            if ((arr[i]) != x[i])
                ok = false;
        }
        ok ? cout << "OK" : cout << "WRONG_ANSWER";
    }
    return 0;
}
