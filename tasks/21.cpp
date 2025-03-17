#include <iostream>
using namespace std;

void solve() {
    int l, r; cin >> l >> r;
    if ( l == 1 && r == 1) {
        cout << 1 << endl;
        return;
    }
    cout << r - l << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

