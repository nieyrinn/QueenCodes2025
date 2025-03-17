#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; 
    cin >> n;
    vector<int> a, b, c;
    int t;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (t == 1) {
            a.push_back(i);
        } else if (t == 2) {
            b.push_back(i);
        } else if (t == 3) {
            c.push_back(i);
        }
    }
    int m = min(a.size(), min(b.size(), c.size()));
    cout << m << endl;
    for (int i = 0; i < m; i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
}