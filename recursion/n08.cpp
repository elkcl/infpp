#include <iostream>
#include <string>
using namespace std;

bool balance(string s, string stack) {
    if (s.empty()) {
        return stack.empty();
    }
    switch (s[0]) {
        case '[':
        case '(':
        case '{':
            return balance(s.substr(1), stack+s[0]);
        case ']':
            if (stack.back() != '[') return false;
            return balance(s.substr(1), stack.substr(0, stack.length()-1));
        case ')':
            if (stack.back() != '(') return false;
            return balance(s.substr(1), stack.substr(0, stack.length()-1));
        case '}':
            if (stack.back() != '{') return false;
            return balance(s.substr(1), stack.substr(0, stack.length()-1));
        default:
            return balance(s.substr(1), stack);
    }
}

int main() {
    string s;
    getline(cin, s);
    if (balance(s, "")) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}