#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (abs(v[i] - v[i+1]) <= k) {
            count++;
        } 
    }

    cout << count  << endl;
}