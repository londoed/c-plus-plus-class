#include <iostream>
using namespace std;

// Program to compute the average of a student's three test scores //

int main() {

  cout << "\nEric Londo\n\n";
  cout << "Project_1 Problem_2\n\n";
  cout << "This program computes the average of student's three test scores\n\n";

  double avg_score, score_1, score_2, score_3 = 0.0;

  cout << "Enter the student's first test score: ";
  cin >> score_1;
  cout << "Enter the student's second test score: ";
  cin >> score_2;
  cout << "Enter the student's third test score: ";
  cin >> score_3;

  avg_score = (score_1 + score_2 + score_3) / 3;

  cout << "\nYour test scores are: \n";
  cout << "\tTest 1 = " << score_1 << "\n";
  cout << "\tTest 2 = " << score_2 << "\n";
  cout << "\tTest 3 = " << score_3 << "\n";
  cout << "\nAverage test score is: " << avg_score << endl;

  return 0;
}
