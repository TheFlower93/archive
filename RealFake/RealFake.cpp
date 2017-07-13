#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main (int argc, const char *argv[])
{
    ifstream inputFile(argv[1]);

    string input;

    if (inputFile.is_open()) {
        while (getline (inputFile, input)) {
            input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());
            int sum = 0;
            for (int i = 0; i < input.length(); i += 2)
                sum += 2 * (input[i] - '0');

            for (int i = 1; i < input.length(); i += 2)
                sum += (input[i] - '0');

            if (sum % 10 == 0)
                cout << "Real" << endl;
            else
                cout << "Fake" << endl;
        }
        inputFile.close();
    } else
        cerr << "Open failed" << endl;

    return 0;
}