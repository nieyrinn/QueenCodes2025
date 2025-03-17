// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, s;
//     cin >> n >> s;
    
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     sort(v.begin(), v.end());

//     int count = 0, sum = 0;
//     for (int price : v) {
//         if (sum + price > s) break;
//         sum += price;
//         count++;
//     }

//     cout << count << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (sum + v[i] <= s) {
            sum += v[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}