#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

string lowerCase(string input)
{
    for (int i = 0; i < input.length(); ++i) {
        if (isupper(input[i]))
            input[i]= tolower(input[i]);
    }
    
    return input;
}

int main(int argc, char *argv[])
{
    ifstream inputFile(argv[1]);
    
    string input;

    if (inputFile.is_open()) {
        while (getline(inputFile, input)) {
            cout << lowerCase(input) << endl;
        }
    } else {
        cerr << "Open failed" << endl;
    }

    return 0;
}