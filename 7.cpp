#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, max1 = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        max1 = max(max1, x);
    }
    cout << max1 << endl;
}