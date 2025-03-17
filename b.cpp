#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    long long sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}