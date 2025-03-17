#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int temp = x;
        x = y % x;
        y = temp;
    }
    return x;
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long result = gcd(gcd(a, b), c);
    cout << result << endl;
    return 0;
}
