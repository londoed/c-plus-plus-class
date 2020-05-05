#include <iostream>
using namespace std;

double calculate_slope(int x1, int x2, int y1, int y2) {
  double slope;

  slope = (y2 - y1) / (x2 - x1);
  return slope;
}

int main() {
  int arr [6];
  int y_intercept, x1, y1 = 0;
  int x2 = 1; int y2 = -5;
  double slope = calculate_slope(x1, x2, y1, y2);

  for (int x = 0; x <= size(arr) - 1; x++) {
    arr[x] = (slope * x) + y_intercept;
  }

  cout << "\nEric Londo" << endl;
  cout << "Exam_3 Problem_1";

  cout << "\n\nLine: y = " << slope << "x + " << y_intercept << endl;
  cout << "----------------" << endl;
  cout << "|x            y|" << endl;
  cout << "----------------" << endl;

  for (int i = 0; i <= size(arr) - 1; i++) {
    if (i == 0) {
      cout << "|" << i << "\t\t\t" << arr[i] << "  |" << endl;
    } else if (i == 1) {
      cout << "|" << i << "\t\t\t" << arr[i] << " |" << endl;
    } else {
      cout << "|" << i << "\t\t\t" << arr[i] << "|" << endl;
    }
  }

  cout << "----------------" << endl;
  return 0;
}
