//Write a c++ program to read and write data in to file
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create an output file stream object.
    ofstream outfile("output.txt");

    // Write some data to the file.
    outfile << "This is some data." << endl;
    outfile << "This is another line of data." << endl;

    // Close the file stream object.
    outfile.close();

    // Create an input file stream object.
    ifstream infile("output.txt");

    // Read the data from the file.
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Close the file stream object.
    infile.close();

    return 0;
}