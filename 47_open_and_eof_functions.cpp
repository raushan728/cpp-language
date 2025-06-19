#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // declaring an object of the type ofstream
    // ofstream out;

    // connecting the object out to the text file using the member function open()
    // out.open("sample46.txt");

    // // writing to the file
    // out << "This is me\n";
    // out << "This is also me";
    // closing the file connection
    // out.close();

    // declaring an object of the type ifstream
   ifstream in;
    string st;
    in.open("sample46.txt");

    while (!in.eof())
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close(); 
        return 0;
    }
