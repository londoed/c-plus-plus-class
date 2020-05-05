#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main() {
    ifstream input_file;
    double num1, num2, num3, num4, num5, avg = 0.0;
    
    cout << "\nEric Londo" << endl;
    cout << "Exam2_Problem2" << endl;
    cout << "\n\nThis program will write compute" << endl;
    cout << "the average of 5 numbers stored in a" << endl;
    cout << "file called data.txt" << endl;
    
    input_file.open("data.txt");
    cout << "\n[...] Reading data from file." << endl;
    
    input_file >> num1;
    input_file >> num2;
    input_file >> num3;
    input_file >> num4;
    input_file >> num5;
    
    input_file.close();
    
    avg = (num1 + num2 + num3 + num4 + num5) / 5;
    
    cout << "\nThe average is = " << avg << endl;
    return 0;
}




