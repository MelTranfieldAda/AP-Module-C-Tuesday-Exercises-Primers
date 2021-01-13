#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

void lowerCase(string input) {
  for(int i = 0; i < input.length() - 1; i++) {
    input[i] = tolower(input[i]);
  }
}

string reverse(string originalInput) {
  string input = originalInput;
  int lastIndex = input.length() - 1;
  int firstIndex = 0;
  while ( firstIndex <= lastIndex ) {
    char temp = input[firstIndex];
    input[firstIndex] = input[lastIndex];
    input[lastIndex] = temp;
    lastIndex--;
    firstIndex++;
  }
  return input;
}

int main() {
  string userInput;

  cin >> userInput;

  lowerCase(userInput);

  string reverseInput = reverse(userInput);

  if (userInput != reverseInput) {
      cout << "Not a palindrome";
  } else {
    cout << "Is a palindrome";
  }

}