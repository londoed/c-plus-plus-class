// // Calculate radius of a circle //
//
// #include <iostream>
// #include <math.h>
//
// using namespace std;
//
// int main() {
//   double radius, area;
//   const double PI = 3.14159;
//
//   cout << "Enter the radius of the circle: ";
//   cin >> radius;
//
//   area = PI * pow(radius, 2);
//
//   cout << "The area of the circle is " << area << endl;
//   return 0;
// }

// Pythagorean Theorem //

#include <iostream>
using namespace std;

int main() {
  double a, b, c;

  cout << "Please enter the letter of one side of the triangle: ";
  cin >> a;

  cout << "Please enter the length of the other side of the triangle: ";
  cin >> b;

  c = sqrt((pow(a, 2) + pow(b, 2)));

  cout << "The length of the final side of the triangle is: " << c << endl;
  return 0;
}
