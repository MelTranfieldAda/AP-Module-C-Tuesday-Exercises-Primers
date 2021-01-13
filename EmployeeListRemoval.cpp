#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  char removedEmployee[100];
  
  cout << "There are five employees: \n";

  string names[] = { "John Smith", "Jaelynn Stuart", "Kaley Barajas", "Walter Collier", "Cale Myers" };

  for (string s : names) {
    cout << s << "\n";
  }

  cout << "Enter an employee name to remove: ";
  
  cin.getline(removedEmployee, sizeof(removedEmployee));

  remove(names, names + size(names), removedEmployee);
  
  for (string s : names) {
    cout << s << "\n";
  }
}