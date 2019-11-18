// input/output code for project 2
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int x, y;
    int** givenmatrix;
    
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
    
    for (int i = 0; i < x; i ++){
        for (int j = 0; j < y; j++){
            output_file << givenmatrix[i][j];
            output_file << " ";
        }
        cout << "\n";
    }
 
    return 0;
}
