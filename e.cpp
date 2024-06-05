#include <iostream>
#include <string>

using namespace std;

string spaceMid(const string &s) {
    string res;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s.length() % 2 != 0) {
            res = s[s.length()/2];
        } else {
            res = "suck";
        }
    }
    return res;
}

int main() {
    string m;
    cin >> m;
    string r = spaceMid(m);
    cout << r;
    return 0;
}