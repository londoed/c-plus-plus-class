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
  int delta_time, t_initial, t_final;
  double total_distance, current_distance;

  cout << "\nEric Londo" << endl;
  cout << "Project_3 Problem_2";
  cout << "\n\nEnter initial time in seconds: ";
  cin >> t_initial;

  cout << "\nEnter final time in seconds: ";
  cin >> t_final;

  delta_time = t_final - t_initial;

  cout << "\nTime (s)   Distance (m)" << endl;
  cout << "------------------------" << endl;

  for (int i = t_initial; i <= t_final; i++) {
    cout << i << "\t\t\t\t" << gobject.falling_distance(i) << endl;
  }

  delta_time = t_final - t_initial;
  total_distance = gobject.falling_distance(t_final);

  cout << "\nTotal distance traveled is " << total_distance << " meters" << endl;

  return 0;
}
