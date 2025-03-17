#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int r = 1;
    for (int i = 0; i < n; i++) {
        while ((a[i] % (r * 2)) == 0) {
            r *= 2;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % r == 0) {
            cnt++;
        }
    }

    cout << r << " " << cnt << endl;
}