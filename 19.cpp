#include <iostream>
using namespace std;

void solve() {
    int n, sum = 0, happy_days = 0;
    cin >> n;
    
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        sum += a;
        if (sum % 8 == 1) happy_days++; 
    }

    cout << happy_days << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0; 
}
