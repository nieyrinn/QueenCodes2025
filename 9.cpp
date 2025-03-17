#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n;
    unordered_set<string> banned;
    string word, line;
    cin.ignore();
 
    for (int i = 0; i < n; i++) {
        getline(cin, word);
        banned.insert(word);
    }
 
    cin >> m;
    cin.ignore();
    
    for (int i = 0; i < m; i++) {
        getline(cin, line);
        istringstream iss(line);
        bool is_spam = false;
        
        while (iss >> word) {
            if (banned.count(word)) {
                is_spam = true;
                break;
            }
        }
 
        cout << (is_spam ? "SPAM" : "OK") << endl;
    }
}

int main() {
    string 
}