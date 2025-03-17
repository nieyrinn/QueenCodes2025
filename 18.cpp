#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int pairs = 0;
    int i = 0;
    while (i < n - 1) {
        if (v[i + 1] - v[i] <= k) {
            pairs++;
            i += 2; 
        } else {
            i++;
        }
    }
    cout << pairs << endl;
    return 0;
}