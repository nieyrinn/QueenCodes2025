#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int max = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (max + v[i] <= k) {
            max += v[i];
            count++;
        }
    }
    cout << count << endl;
}


