#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int id;
    string grade;

    cout << "Enter Student Full Name: ";
    getline(cin, fullName);

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Student Grade: ";
    cin >> grade;

    ofstream file("Student.txt");

    if (!file.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    file << "Full Name: " << fullName << endl;
    file << "ID: " << id << endl;
    file << "Grade: " << grade << endl;

    file.close();

    cout << "Data saved successfully to Student.txt" << endl;

    return 0;
}
