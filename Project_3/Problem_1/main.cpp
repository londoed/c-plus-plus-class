#include <iostream>
using namespace std;

class GravityObject {
public:
  double gravity = 9.8;

  double falling_distance(int time) {
    double distance;

    distance = 0.5 * gravity * (time * time);
    return distance;
  }
};

int main() {
  GravityObject gobject;
  int time;
  double distance;

  cout << "\nEric Londo" << endl;
  cout << "Project_3 Problem_1";
  cout << "\n\nEnter the time in seconds: ";
  cin >> time;

  distance = gobject.falling_distance(time);

  cout << "\nThe distance fallen in " << time << " seconds is " << distance << " meters" << endl;

  return 0;
}
