#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    cout << index + 1 << endl;
}
    // int n, m = -1, k = -1;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     int v;
    //     cin >> v;
    //     if (v > m) {
    //         m = v;
    //         k = i;
    //     }
    // }
    // cout << k << endl;
    // return 0;

