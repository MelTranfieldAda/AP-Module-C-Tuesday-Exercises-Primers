#include <iostream>

#include <iostream>
using namespace std;

int main() {

  string word = "Hello";
  cout << "Please enter a word: \n";

  cin >> word;

  int lastIndex = word.length() - 1;
  int firstIndex = 0;
  while ( firstIndex <= lastIndex ) {
    char temp = word[firstIndex];
    word[firstIndex] = word[lastIndex];
    word[lastIndex] = temp;
    lastIndex--;
    firstIndex++;
  }
  cout << word << endl;
}