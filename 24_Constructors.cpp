#include <iostream>
using namespace std;

class Student {
    string name;

public:
    // Constructor
    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Raushan");
    s1.display();
    return 0;
}
