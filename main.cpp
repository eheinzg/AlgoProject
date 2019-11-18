// input/output code for project 2
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input_file;        // create input file stream object
    ofstream output_file;       // create output file stream object
    
    // read input.txt and display matrix
    input_file.open("input.txt");
    if (input_file) {
        string line;
        while (getline(input_file, line))   // read line from stream
            cout << line << '\n';
        input_file.close();
    }
    
    // write to outputfile
    output_file.open("output.txt");
    // output_file << 
    
    return 0;
}
