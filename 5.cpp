#include <iostream>
using namespace std;
 
int main() {
    int X;
    cin >> X;
    int left = 1, right = 10000, steps = 0;
    while (left <= right) {
        steps++;
        int mid = (left + right) / 2;
        if (mid == X) break;
        if (mid < X) left = mid + 1;
        else right = mid - 1;
    }
    cout << steps << endl;
}


