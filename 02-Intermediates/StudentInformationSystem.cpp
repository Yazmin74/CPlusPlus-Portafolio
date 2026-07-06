#include <iostream>
#include <string>

using namespace std;

//Define the student class
class Student {
public:

string name;
string address;
string city;
string state;
string zip;

char gender;
int studentId;
double gpa;
 
};

//Function to create and return a student object
Student createStudent() {
    Student student;
    cout << "   " << endl;
    cout << "Enter Student Information:\n"; // "\n" to declare a new line
    cout << "   " << endl;
    cout << "Name: ";
    getline (cin, student.name);
  
    cout << "Address: ";
    getline (cin, student.address);

    cout << "City: ";
    getline (cin, student.city);

    cout << "State: ";
    getline (cin, student.state);
 
    cout << "ZIP: ";
    getline (cin, student.zip);

    cout << "Gender: ";
    cin >> student.gender;
    cin.ignore();

    cout << "Student ID: ";
    cin >> student.studentId;
    cin.ignore();

    cout << "GPA: ";
    cin >> student.gpa;
    cin.ignore();

    return student;
    
}

//Function to display student information

void displayStudent(const Student& student) {
    
    cout << "   " << endl;
    cout << "Student Information: " << endl;
    cout << "   " << endl;
    cout << "Name: " << student.name << endl;
    cout << "Address: " << student.address << endl;
    cout << "City: " << student.city << endl;
    cout << "State: " << student.state << endl;
    cout << "ZIP: " << student.zip << endl;
    cout << "Gender: " << student.gender << endl;
    cout << "Student ID: " << student.studentId << endl;
    cout << "GPA: " << student.gpa << endl;
    
}

int main() {
    // Declare three students objects
    Student students[3];
    
    //Initialize each student object
    for (int i = 0; i < 3; ++i) {
        students[i] = createStudent();
    }
    
    //Display information for each student
    for (int i = 0; i < 3; ++i) {
        cout << "   " << endl;
        cout << "Output for Student " << (i + 1) << endl;
        displayStudent(students[i]);
    }
    
    return 0;
    
}
