#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;  // Static variable to count students
    // Constructor
    Student(string n) {
        name = n;
        count++;  // Increase count when a student is created
    }
    // Static function to show count
    static void showCount() {
        cout  << count << endl;
    }
};
// Define static variable outside the class
int Student::count = 0;
int main() {
    Student s1("yamini");
    Student s2("tejaswini");
    // Call static function
    Student::showCount(); 

    return 0;
}
