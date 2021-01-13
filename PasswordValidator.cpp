#include <iostream>
using namespace std;

struct User {
    string username;
    string password;
    string firstName;

    User(string u, string p, string fN){
      username = u;
      password = p;
      string firstName = fN;
    }
  };

int main() {
  string usernameInput;
  string passwordInput;

  struct User u = User("meltranfield", "chessisamazing7", "Melissa Tranfield");

  cout << "Hello, what's your username?\n";

  cin >> usernameInput;

  cout << "Please enter your password:\n";

  cin >> passwordInput;

  if (usernameInput != u.username || passwordInput != u.password) {
      cout << "Failed to Authenticate";
  } else {
    cout << "Welcome!";
  }

}