#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
  locale loc;
  string wordInput;

  cout << "Please enter a word: \n";

  cin >> wordInput;

  cout << wordInput << " converted to lowercase is ";

  for(auto elem : wordInput)
    cout << std::tolower(elem, loc);
}