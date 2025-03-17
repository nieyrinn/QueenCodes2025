#include <iostream>
#include <algorithm> 
#include <vector>
#include <string>
using namespace std;
int main() {
    int n; 
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        vector<char> c;
        for (int i = 0; i < s.size(); i++) {
            c.push_back(s[i]);
        }
        for (int i = 0; i < c.size(); i++) {
           if (c[i] == 'q') {
            c[i] = 'p';
           } else if (c[i] == 'p') {
            c[i] = 'q';
           }
        }

        for (int i = 0; i < s.size(); i++) {
            cout << c[i];
       }
       cout << endl;
    }
}


