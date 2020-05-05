#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "Eric Londo" << endl;
  cout << "Project_2 Problem_2";
  cout << "\n\nThis program computes the number of dollar bills," << endl;
  cout << "quarters, dimes, nickels, and pennies that should" << endl;
  cout << "be returned for change\n\n";

  double total_cost, total_paid, total_change = 0.0;
  int total_p_change, whole_dol_change, frac_dol_change = 0;
  int whole_q_change, frac_q_change = 0;
  int whole_d_change, frac_d_change = 0;
  int whole_n_change, frac_n_change = 0;
  int whole_p_change = 0;
  char flag = 'Y';

  while (toupper(flag) == 'Y') {
    cout << "\nEnter the cost of the item: ";
    cin >> total_cost;
    cout << "\nEnter the amount paid: ";
    cin >> total_paid;

    total_change = (int)((total_paid * 100 - total_cost * 100)) / 100.00;
    cout << "\n\nTotal Change = " << total_change << endl;

    total_p_change = total_change * 100;
    whole_dol_change = (int)(total_p_change / 100);
    frac_dol_change = round((total_p_change % 100));

    total_p_change = frac_dol_change;
    whole_q_change = (int)(total_p_change / 25);
    frac_q_change = round((total_p_change % 25));

    total_p_change = frac_q_change;
    whole_d_change = (int)(total_p_change / 10);
    frac_d_change = round((total_p_change % 10));

    total_p_change = frac_d_change;
    whole_n_change = (int)(total_p_change / 5);
    frac_n_change = round((total_p_change % 5));

    total_p_change = frac_n_change;

    cout << "\nThe number of dollars = " << whole_dol_change << endl;
    cout << "The number of quarters = " << whole_q_change << endl;
    cout << "The number of dimes = " << whole_d_change << endl;
    cout << "The number of nickels = " << whole_n_change << endl;
    cout << "The number of pennies = " << total_p_change << endl;

    cout << "\n\nDo you want to run the program again? (Y = yes, N = No) ";
    cin >> flag;

    if (toupper(flag) == 'N') {
      break;
    }
  }

  return 0;
}
