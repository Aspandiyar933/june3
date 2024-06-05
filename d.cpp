#include <iostream>
#include <string>

using namespace std;

string addSpace(const string &m) {
    string res;
    for (size_t i = 0; i < m.length(); ++i) {
        res += m[i];
        if (i != m.length() - 1) {
            res += ' ';
        }
    }
    return res;
}

int main() {
    string m;
    cin >> m;
    string r = addSpace(m);
    cout << r;
    return 0;
}