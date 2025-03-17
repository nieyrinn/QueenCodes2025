#include <iostream>
#include <cmath>
using namespace std;

// int gcd(int x, int y) {
//     while (y != 0) {
//         int temp = y;
//         y = x % y;
//         x = temp;
//     }
//     return x;
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     int result = gcd(gcd(a, b), c);

//     if (result == 1) {
//         cout << 1 << endl;
//     } else if (result == 0){
//         cout << "None" << endl;
//     }

//     return 0;
// }

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long n;
    n = min(min(a,b-a),c-b);
    n -= 1;
    if (n == 0) {
        cout << "None" << endl;
    } else {
        cout << n << endl;
    }
}
