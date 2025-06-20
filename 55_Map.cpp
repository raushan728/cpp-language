#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Map is an associative array
    map<string, int> marksMap;

    // Initial entries in the map
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // Inserting additional entries into the map
    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});

    // Displaying the contents of the map
    cout << "Marks of students:\n";
    for (const auto &entry : marksMap)
    {
        cout << entry.first << " " << entry.second << "\n";
    }

    return 0;
}
