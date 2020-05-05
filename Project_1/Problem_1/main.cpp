#include <iostream>

using namespace std;

// Program to compute the total amount of change when given the number of pennies, nickels, dimes, and quarters //

int main() {
  cout << "\nEric Londo\n\n";
  cout << "Project_1 Problem_1\n\n";
  cout << "This program computes the total amount of change when\n";
  cout << "given the number of pennies, nickels, dimes, and quarters.\n\n";

  int pennies, nickels, dimes, quarters = 0;
  double total = 0.0;

  cout << "Enter the number of pennies: ";
  cin >> pennies;
  cout << "Enter the number of nickels: ";
  cin >> nickels;
  cout << "Enter the number of dimes: ";
  cin >> dimes;
  cout << "Enter the number of quarters: ";
  cin >> quarters;

  total = 0.01 * pennies + 0.05 * nickels + 0.1 * dimes + 0.25 * quarters;

  cout << "\nTotal is: " << total << endl;
  return 0;
}
