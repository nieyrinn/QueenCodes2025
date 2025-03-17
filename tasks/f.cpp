// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     long long n, k;
//     cin >> n >> k;
//     vector<vector<int> > v(n, vector<int>(k));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < k; j++) {
//             cin >> v[i][j];
//         }
//     }

//     bool t = false;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < k; j++) {
//             if (v[i][j] == v[n-1-i][k-1-j] && v[i][j] == v[j][i]) {
//                 t = true;
//                 break;
//             }
//         }
//     }

//     if (t) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<vector<int> > v(n, vector<int>(k));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> v[i][j];
        }
    }

    bool t = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (v[i][j] != v[k-1-i][k-1-j] && v[i][j] != v[j][i]) {
                t = false;
                break;
            }
        }
        if (!t) break;
    }

    if (t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


