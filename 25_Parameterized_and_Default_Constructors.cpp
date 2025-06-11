// // Default Constructors
// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     Student()
//     {
//         cout << "Default Constructor Called" << endl;
//     }
// };

// int main()
// {
//     Student s1; // Default constructor automatically call hoga
//     return 0;
// }

// Parameterized Constructors
#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1("Raushan", 20); // Parameterized constructor call hoga
    s1.display();
    return 0;
}
