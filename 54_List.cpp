#include <iostream>
#include <list>

using namespace std;

// Function to display the elements of the list
void display(const list<int> &lst)
{
    for (const int &element : lst)
    {
        cout << element << " ";
    }
    cout << endl; // Print a newline after displaying the list
}

int main()
{
    // Create and populate the first list
    list<int> list1; // Empty list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);

    // Display the original list
    cout << "Original list: ";
    display(list1);

    // Remove all occurrences of 9 from the list
    list1.remove(9);
    cout << "List after removing 9: ";
    display(list1);

    // Additional operations
    list1.pop_back(); // Remove the last element
    cout << "List after popping the last element: ";
    display(list1);

    list1.pop_front(); // Remove the first element
    cout << "List after popping the front element: ";
    display(list1);

    list1.sort(); // Sort the list
    cout << "Sorted list: ";
    display(list1);

    return 0;
}
