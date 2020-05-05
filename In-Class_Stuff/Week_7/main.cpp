// Write a program that converts celsius temperatures to fahrenheit temperatures //
// F = 9/5 * C + 32

#include <iostream>
using namespace std;

int main() {
  double celsius, fahrenheit = 0.0;
  char input;

  cout << "Do you want to convert to celsius (c) or fahrenheit (f)? " << endl;
  cin >> input;

  if (input == 'f') {
    cout << "Enter your value in celsius: " << endl;
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    cout << celsius << " degrees is " << fahrenheit << " degrees in fahrenheit!" << endl;
  } else {
    cout << "Enter your value in fahrenheit: " << endl;
    cin >> fahrenheit;

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << fahrenheit << " degrees is " << celsius << " degrees in celsius!" << endl;
  }
  return 0;
}
