#include <iostream>
using namespace std;

int main() {
  int arr [5];

  for (int i = 0; i <= size(arr) - 1; i++) {
    if (i == 0) {
      arr[i] = 4;
    } else {
      arr[i] = arr[i - 1] + 2;
    }
  }

  cout << "\nEric Londo" << endl;
  cout << "Project_3 Problem_3";

  cout << "\n\ni          y[i]" << endl;
  cout << "-----------------" << endl;

  for (int i = 0; i <= size(arr) - 1; i++) {
    cout << i << "\t\t y[" << i << "] = " << arr[i] << endl;
  }

  return 0;
}
