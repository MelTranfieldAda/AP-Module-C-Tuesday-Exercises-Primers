#include <iostream>
#include <locale>

using namespace std;

//ranges of types of char in ASCII table. convert string to array and filter it for those ranges in each condition

int countDigits(string input) {
  int digitCount = 0;
  for (char c : input) {
    if (isdigit(c)) {
      digitCount++;
    }
  }
  return digitCount;
}

int countAlphabets(string input) {
  int alphaCount = 0;
  for (char c : input) {
    if (isalpha(c)) {
      alphaCount++;
    }
  }
  return alphaCount;
}

int countSpecial(string input) {
  int specialCount = 0;
  for (char c : input) {
    if (ispunct(c)) {
      specialCount++;
    }
  }
  return specialCount;
}

int main() {
  string passwordInput;

  cout << "Please enter a password to check its complexity: \n";

  cin >> passwordInput;

  int length = passwordInput.length();

  cout << "The password ‘" << passwordInput << "’ is ";
  if (
    length >= 8 && 
    countDigits(passwordInput) >= 2 &&
    countAlphabets(passwordInput) >= 4 &&
    countSpecial(passwordInput) >= 1
  ) {
    cout << "Very Strong";
  } else if (
    length >= 8 && 
    countDigits(passwordInput) >= 2 &&
    countAlphabets(passwordInput) >= 4
  ) {
    cout << "Strong";
  } else if (
    countDigits(passwordInput) == length ||
    countAlphabets(passwordInput) == length
  ) {
    cout << "Weak";
  } else if (
    length >= 4
  ) {
    cout << "Moderate";
  }
}