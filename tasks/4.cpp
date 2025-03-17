
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int x = 0;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] != s2[i]) x++;
    cout << (x*10 < s1.size() ? "YES" : "NO") << endl;
}