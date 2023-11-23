#include <iostream>

using namespace std;

bool isPalindrome(string str, int start, int end) {
  if (start >= end) {
    return true;
  } else if (str[start] != str[end]) {
    return false;
  } else {
    return isPalindrome(str, start + 1, end - 1);
  }
}

int main() {
  string str;
  cin >> str;

  bool isPal = isPalindrome(str, 0, str.length() - 1);
  if (isPal) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}