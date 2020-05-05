#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Enter a number to determine if it is odd or even: ";
  cin >> num;

  if (num & 1) {
    cout << num << " is odd!" << endl;
    return 0;
  }

  cout << num << " is even!" << endl;
  return 0;
}
