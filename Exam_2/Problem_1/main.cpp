#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream output_file;
    double num1, num2, num3, num4, num5 = 0.0;
    
    cout << "\nEric Londo" << endl;
    cout << "Exam2_Problem1" << endl;
    cout << "\n\nThis program will write 5 numbers" << endl;
    cout << "into a file called data.txt" << endl;
    
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;
    cout << "Enter the fifth number: ";
    cin >> num5;
    
    output_file.open("data.txt");
    cout << "\n[...] Writing data to file" << endl;
    
    output_file << num1 << endl;
    output_file << num2 << endl;
    output_file << num3 << endl;
    output_file << num4 << endl;
    output_file << num5 << endl;
    
    output_file.close();
    cout << "\n[!] COMPLETE: data.txt created and written to." << endl;
    
    return 0; 
}
