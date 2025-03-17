#include <iostream>
using namespace std;
void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int row1 = min(a, m); 
    int row2 = min(b, m); 
    int free_spaces = 2 * m - (row1 + row2);
    int extra = min(c, free_spaces);
    cout << row1 + row2 + extra << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
