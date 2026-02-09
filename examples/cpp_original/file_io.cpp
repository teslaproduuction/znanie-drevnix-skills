#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("output.txt");
    if (outFile.good()) {
        outFile << "Hello from file!" << endl;
        outFile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }

    ifstream inFile;
    inFile.open("output.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
