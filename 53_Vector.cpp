#include <iostream>
#include <vector>
using namespace std;

// Function to display the elements of the vector
void display(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() { 
    vector<int> vec1; // Zero-length integer vector
    int element, size;

    // Input the size of the vector
    cout << "Enter the size of your vector: ";
    cin >> size;

    // Loop to add elements to the vector
    for (int i = 0; i < size; i++) {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); // Add element to the vector
    }

    // Display the contents of the vector
    display(vec1);    

    // Insert an element at the beginning of the vector
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    cout << "After inserting 566 at the beginning: ";
    display(vec1);

    // Remove the last element from the vector
    vec1.pop_back();
    cout << "After popping the last element: ";
    display(vec1);

    return 0;
}
