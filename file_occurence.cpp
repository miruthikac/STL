#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
    ifstream ofl("file1.txt");

    if (!ofl)
    {
        cout << "Error in opening the Input text file." <<endl;
        return 1;
    }

    map<string, int> count;
    string word;

    while (ofl >> word) {
        count[word]++;
    }

    ofl.close();

    for (const auto& pair : count) {
        cout << pair.first << ": " << pair.second <<endl;
    }

    return 0;
}
