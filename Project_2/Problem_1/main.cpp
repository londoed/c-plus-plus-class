#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "\n\nEric Londo" << endl;
  cout << "Project_2 Problem_1";
  cout << "\n\nThis program computes both roots of a quadratic equation" << endl;
  cout << "given the coefficients A, B, and C" << endl;

  double real1, real2, imag = 0.0;
  double a, b, c = 0.0;
  double d, dd = 0.0;
  char flag = 'Y';

  while (toupper(flag) == 'Y') {
    cout << "\n\nPlease enter the value of the 'a' coefficient: ";
    cin >> a;
    cout << "Please enter the value of the 'b' coefficient: ";
    cin >> b;
    cout << "Please enter the value of the 'c' coefficient: ";
    cin >> c;

    d = (pow(b, 2.0) - (4.0 * a * c));

    if (d < 0.0) {
      dd = sqrt((4.0 * a * c) - pow(b, 2.0));
      imag = dd / (2.0 * a);
      real1 = b / (2.0 * a);
      real2 = -b / (2.0 * a);
    } else if (d == 0.0) {
      imag = 0.0;
      real1 = b / (2.0 * a);
      real2 = -b / (2.0 * a);
    } else {
      imag = 0.0;
      real1 = (-b + sqrt(d)) / (2.0 * a);
      real2 = (-b - sqrt(d)) / (2.0 * a);
    }
    
    cout << "\n\nSolution 1 is = " << real1 << "" << "+j" << imag << endl;
    cout << "Solution 2 is = " << real2 << "" << "-j" << imag << endl;

    cout << "\n\nDo you want to run the program again? (Y = yes, N = no): ";
    cin >> flag;
  }

  return 0;
}



