#include <iostream>
using namespace std;
/*Static Variable (count):
                    Shared by all objects of the class.
                    Retains its value across objects.
                    Here, it counts how many objects are created.
Static Function (showCount()):
                    Belongs to the class, not to objects.
                    Can be called using either class name (Counter::showCount()) or an object.
                    Can access only static members of the class.*/
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

