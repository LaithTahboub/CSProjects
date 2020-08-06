#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x = 0, y = 0;
        string str;
        int n ;
        cin >> n >> str;
        if (str[0] == '>' || str[n - 1] == '<')
            cout << 0 << endl;
        else {
            for (int i = 0; i < n; i++) {
                if (str[i] == '>')
                    break;
                else
                    x++;
            }
            for (int i = n - 1; i > 0; i--) {
                if (str[i] == '<')
                    break;
                else
                    y++;
            }
            cout << min(x, y) << endl;
        }
    }
    return 0;
}
