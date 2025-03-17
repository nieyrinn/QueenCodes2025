#include <iostream>
using namespace std;
const int esep = 1e9 + 7;

int main() {
    long long n, k;
    cin >> n >> k;
    long long r = 1;
    for (int i = 0; i < n; i++) {
        r = (r * k) % esep;
    }
    cout << r << endl;
}

