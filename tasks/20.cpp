#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> v(n, 0);
    int sum = 0, o = 0;

    if (k ==  0) {
        cout << 0 << endl;
        return;
    }
    if (p == 1 && k != 0) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n && sum < k; i += p) {
        int x = min(p, k - sum);
        sum += x;
        o++;
    }

    if (sum == k) {
        cout << o << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}