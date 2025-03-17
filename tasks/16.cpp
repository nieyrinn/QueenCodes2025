#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    string s;
    int n;

    while (cin.peek() != '\n') {
        cin >> n;
        v.push_back(n);
    }
    cin.ignore(); 

    cin >> s;

    int sum = 0;
    for (char c : s) {
        int i = c - '0' - 1; 
        if (i >= 0 && i < v.size()) {
            sum += v[i];
        }
    }
    cout << sum << endl;
}