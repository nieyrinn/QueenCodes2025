#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int h = 0;
    int total = 0;
    int level = 0;
    while (total <= n) {
        level++;
        h += level;
        total += h;
    }
    cout << level - 1 << endl;
}