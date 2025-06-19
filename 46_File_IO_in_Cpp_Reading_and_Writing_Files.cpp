#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string st = "Raushan kumar";

    // Write to file
    ofstream out ("sample46.txt");
    out << st;
    out.close();

    // Read from file
    string st2;
    ifstream in("sample46.txt");

    getline(in, st2);
    in.close();
    cout << st2;


    return 0;
}
