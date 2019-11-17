#include <list>

void _possibleParenthesis(int n, std::list<std::string> &result, std::string str, int left, int right) {
    if (left == n && right == n) {
        result.push_back(str);
    } else {
        if (left < n) {
            _possibleParenthesis(n, result, str + "{", left + 1, right);
        }
        if (right < left) {
            _possibleParenthesis(n, result, str + "}", left, right + 1);
        }
    }
}


// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n
void possibleParenthesis(int n, std::list<std::string> &result) {
    _possibleParenthesis(n, result, "", 0, 0);
}

