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
    if (str.length() < 26)
        cout << -1;
    else {
        char c = 'a';
        for (int i = 0; i < str.length() && c <= 'z'; i++) {
            if (str[i] <= c) {
                str[i] = c;
                c++;
            }
        }
        if (c <= 'z')
            puts("-1");
        else
            cout << str;
    }
    return 0;
}
